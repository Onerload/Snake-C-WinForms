#include "MyForm.h"

using namespace System;
using namespace System::Windows::Forms;

[STAThreadAttribute]

int main()
{
    Application::SetCompatibleTextRenderingDefault(false);
    Application::EnableVisualStyles();
    SnakeGame::MyForm form;
    Application::Run(% form);
}
class Coordinates
{
public:
    int x, y;
};

Coordinates positionFruit; // ïîçèöèÿ ôðóêòà 
Coordinates direction; // íàïðàâëåíèå çìåéêè 
Coordinates gameArea; // èãðîâàÿ çîíà 

SnakeGame::MyForm::MyForm(void)
{
    InitializeComponent();
    gameArea.x = 540;
    gameArea.y = 340;

    firstLaunch = true;
    NewGame();
}

void SnakeGame::MyForm::Eating()
{
    if (SnakePart[0]->Location.X == positionFruit.x && SnakePart[0]->Location.Y == positionFruit.y)
    {
        score++;
        labelScore->Text = "Ñ÷åò: " + score;
        SnakePart[score] = gcnew PictureBox;
        SnakePart[score]->Location = Point(SnakePart[score - 1]->Location.X + step * direction.x, SnakePart[score - 1]->Location.Y + step * direction.y);
        SnakePart[score]->BackColor = snakeColor;
        SnakePart[score]->Width = step;
        SnakePart[score]->Height = step;
        this->Controls->Add(SnakePart[score]);

        GenerationPositionFruit();
    }

}

void SnakeGame::MyForm::GenerationPositionFruit()
{
    Random^ rand = gcnew Random();
    positionFruit.x = rand->Next(50, gameArea.x - 10);
    positionFruit.y = rand->Next(100, gameArea.y);

    positionFruit.x -= positionFruit.x % step;
    positionFruit.y -= positionFruit.y % step;

    for (int i = 0; i < score; i++)
    {
        if (positionFruit.x == SnakePart[i]->Location.X && positionFruit.y == SnakePart[i]->Location.Y)
            GenerationPositionFruit();
    }

    fruit->Location = Point(positionFruit.x, positionFruit.y);
    this->Controls->Add(fruit);
}

void SnakeGame::MyForm::Movement()
{
    for (int i = score; i > 0; i--)
    {
        SnakePart[i]->Location = SnakePart[i - 1]->Location;
    }
    SnakePart[0]->Location = Point(SnakePart[0]->Location.X + direction.x * step, SnakePart[0]->Location.Y + direction.y * step);
}

void SnakeGame::MyForm::EatYourself()
{
    for (int i = 1; i < score; i++)
    {
        if (SnakePart[0]->Location == SnakePart[i]->Location)
        {
            GameOver();
            MessageBox::Show("Òû ïîìåð");
        }
    }

}

void SnakeGame::MyForm::GameOver()
{
    play = false;
    die = true;
}

void SnakeGame::MyForm::NewGame()
{
    if (!firstLaunch)
    {
        this->Controls->Remove(fruit);
        for (int i = 0; i <= score; i++)
        {
            this->Controls->Remove(SnakePart[i]);
        }
        score = 0;
    }
    else firstLaunch = false;

    SnakePart = gcnew array <PictureBox^, 1>(500);
    SnakePart[0] = gcnew PictureBox();
    SnakePart[0]->Location = Point(gameArea.x / 2 + 40, gameArea.y / 2 + 40);
    SnakePart[0]->BackColor = Color::Blue;
    SnakePart[0]->Width = step;
    SnakePart[0]->Height = step;
    this->Controls->Add(SnakePart[0]);

    fruit = gcnew PictureBox();
    fruit->BackColor = Color::Red;
    fruit->Width = step;
    fruit->Height = step;
    GenerationPositionFruit();


    timer->Interval = updateInterval;
    timer->Start();

    direction.x = 1;
    direction.y = 0;

    play = true;
    die = false;

    labelScore->Text = "Ñ÷åò: 0";
}

void SnakeGame::MyForm::CheckBorders()
{
    if ((SnakePart[0]->Location.X >= RightBorder->Location.X || SnakePart[0]->Location.X <= LeftBorder->Location.X || SnakePart[0]->Location.Y >= DownBorder->Location.Y || SnakePart[0]->Location.Y <= UpBorder->Location.Y) && checkBoxBorders->Checked)
    {
        GameOver();
        MessageBox::Show("Âû óìåðëè îò ñòåíêè");
    }
    if (!checkBoxBorders->Checked)
    {
        if (SnakePart[0]->Location.X >= RightBorder->Location.X)
        {
            SnakePart[0]->Location = Point(LeftBorder->Location.X + direction.x * step, SnakePart[0]->Location.Y + direction.y * step);
        }
        else if (SnakePart[0]->Location.X <= LeftBorder->Location.X)
        {
            SnakePart[0]->Location = Point(RightBorder->Location.X + direction.x * step, SnakePart[0]->Location.Y + direction.y * step);
        }
        else if (SnakePart[0]->Location.Y >= DownBorder->Location.Y)
        {
            SnakePart[0]->Location = Point(SnakePart[0]->Location.X + direction.x * step, UpBorder->Location.Y + direction.y * step);
        }
        else if (SnakePart[0]->Location.Y <= UpBorder->Location.Y)
        {
            SnakePart[0]->Location = Point(SnakePart[0]->Location.X + direction.x * step, DownBorder->Location.Y + direction.y * step);
        }
    }
}

void SnakeGame::MyForm::Form_Updete(System::Object^ sender, System::EventArgs^ e)
{
    if (!die && play)
    {
        Movement();
        Eating();
        EatYourself();
        CheckBorders();
    }
    else if (die && play)
    {
        timer->Stop();
        MessageBox::Show("Èãðà îêîí÷åííà", "Âíèìàíèå");
    }
    else if (!die && !play)
    {
        timer->Stop();
        MessageBox::Show("Èãðà ïðèîñòàíîâëåíà", "Âíèìàíèå");
    }
}

System::Void SnakeGame::MyForm::íîâàÿÈãðàToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    NewGame();
}
     
System::Void SnakeGame::MyForm::ïàóçàïðîäîëæèòüToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (play)
    {
        play = false;
    }
    else
    {
        play = true;
        timer->Start();
    }
}

System::Void SnakeGame::MyForm::âûõîäToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    Application::Exit();
}

System::Void SnakeGame::MyForm::èíôîðìàöèÿÎÈãðåToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    MessageBox::Show("Åøüòå ôðóêòû ,íå âðåçàéòåñü â ñåáÿ, íå âðåçàéòåñü â ñòåíû", "Ïðàâèëà");
}

System::Void SnakeGame::MyForm::MyForm_KeyDown(System::Object^ sender, System::Windows::Forms::KeyEventArgs^ e)
{
    if ((e->KeyCode.ToString() == "Right" ||e->KeyCode.ToString() == "D") && direction.x == 0)
    {
        direction.x = 1;
        direction.y = 0;
    }
    if ((e->KeyCode.ToString() == "Left" || e->KeyCode.ToString() == "A") && direction.x == 0)
    {
        direction.x = -1;
        direction.y = 0;
    }
    if ((e->KeyCode.ToString() == "Up" ||e->KeyCode.ToString() == "W") && direction.y == 0)
    {
        direction.x = 0;
        direction.y = -1;
    }
    if ((e->KeyCode.ToString() == "Down" || e->KeyCode.ToString() == "S") && direction.y == 0)
    {
        direction.x = 0;
        direction.y = 1;
    }
}

System::Void SnakeGame::MyForm::íàñòðîéêèToolStripMenuItem_Click(System::Object^ sender, System::EventArgs^ e)
{
    if (!groupBoxSettings->Visible)
    {
        play = false;
        groupBoxSettings->Visible = true;
        buttonApply->Enabled = true;
        numericUpDownSpeed->Enabled = true;
        comboBoxColorSnake->Enabled = true;
    }
    else
    {
        play = true;
        timer->Start();
        numericUpDownSpeed->Visible = false;
        numericUpDownSpeed->Enabled = false;
        buttonApply->Enabled = false;
        comboBoxColorSnake->Enabled = false;
    }
}

System::Void SnakeGame::MyForm::buttonApply_Click(System::Object^ sender, System::EventArgs^ e)
{
    groupBoxSettings->Visible = false;
    numericUpDownSpeed->Enabled = false;
    buttonApply->Enabled = false;
    comboBoxColorSnake->Enabled = false;
    updateInterval = 101 - Convert::ToSingle(numericUpDownSpeed->Text);
    NewGame();
    if (comboBoxColorSnake->Text == "Green")
    {
        snakeColor = Color::Green;
    }
    if (comboBoxColorSnake->Text == "Red")
    {
        snakeColor = Color::Red;
    }
    if (comboBoxColorSnake->Text == "Blue")
    {
        snakeColor = Color::Blue;
    }
    if (comboBoxColorSnake->Text == "Black")
    {
        snakeColor = Color::Black;
    }
    if (comboBoxColorSnake->Text == "Yellow")
    {
        snakeColor = Color::Yellow;
    }
}

