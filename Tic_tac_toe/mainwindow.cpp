#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <QPixmap>
#include <QGraphicsOpacityEffect>
#include <iostream>

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{

    ui->setupUi(this);

    //load the background board image
    QPixmap picture(":/Images/Images/Board.png");
    ui->BackGround->setPixmap(picture);

    //hides labels so the user can click the pushbutton
    ui->label->hide();
    ui->label_2->hide();
    ui->label_3->hide();
    ui->label_4->hide();
    ui->label_5->hide();
    ui->label_6->hide();
    ui->label_7->hide();
    ui->label_8->hide();
    ui->label_9->hide();

    //makes pushbuttons transparent
    ui->pushButton->setStyleSheet("background:transparent");
    ui->pushButton_2->setStyleSheet("background:transparent");
    ui->pushButton_3->setStyleSheet("background:transparent");
    ui->pushButton_4->setStyleSheet("background:transparent");
    ui->pushButton_5->setStyleSheet("background:transparent");
    ui->pushButton_6->setStyleSheet("background:transparent");
    ui->pushButton_7->setStyleSheet("background:transparent");
    ui->pushButton_8->setStyleSheet("background:transparent");
    ui->pushButton_9->setStyleSheet("background:transparent");

}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_pushButton_clicked()
{
    /*This event sets position of the array,
     * corresponding to the tile on board background image,
     *  to ether X or O depending on the player turn*/

    if(player_turn == 1)
    {
        //this is variable is used in Endgame, and tieGame methods
        //to determine whether to display what player won
        player_id = 1;

        //Loads QPixmap object with image
        QPixmap X(":/Images/Images/X.png");

        //sets label with picture and changes the hieght and width
        ui->label->setPixmap(X.scaled(150,145));

        //changes the player turn
        player_turn++;


        board[0][0] = 'X';
    }
    else
    {
        //this is variable is used in Endgame, and tieGame methods
        //to determine whether to display what player won
        player_id = 2;

        //Loads QPixmap object with image
        QPixmap Y(":/Images/Images/O.png");

        //sets label with picture and changes the hieght and width
        ui->label->setPixmap(Y.scaled(150,145));

        //changes the player turn
        player_turn--;


        board[0][0] = 'O';
    }

    //displays the label with image loaded
    ui->label->show();

    EndGame(is_win(board)); // check if game is won

    TieGame(is_tie(board));// check if game is tied
}


void MainWindow::on_pushButton_2_clicked()
{

    if(player_turn == 1)
    {
        // set player id that is used in the winning message
        player_id = 1;

        //load a pix map image
        QPixmap X(":/Images/Images/X.png");

        //scale the size of the picture
        ui->label_2->setPixmap(X.scaled(150,145));

        //increment the player turn
        player_turn++;

        //set the index of the array to the either an x or o
        board[1][0] = 'X';
    }
    else
    {
        // set the player id of the player who made the move
        player_id = 2;

        // load image from resource file
        QPixmap Y(":/Images/Images/O.png");

        // scale the image
        ui->label_2->setPixmap(Y.scaled(150,145));

        //decrement the player turn
        player_turn--;

        //set the index of the array to either an X or O
        board[1][0] = 'O';
    }

    // display the picture
    ui->label_2->show();

    EndGame(is_win(board)); // check if game is won

    TieGame(is_tie(board));// check if game is tied

}


void MainWindow::on_pushButton_3_clicked()
{
    if(player_turn == 1)
    {
        player_id = 1;
        QPixmap X(":/Images/Images/X.png");
        ui->label_3->setPixmap(X.scaled(150,145));
        player_turn++;
        board[2][0] = 'X';
    }
    else
    {
        player_id = 2;
        QPixmap Y(":/Images/Images/O.png");
        ui->label_3->setPixmap(Y.scaled(150,145));
        player_turn--;
        board[2][0] = 'O';
    }

    ui->label_3->show();

    EndGame(is_win(board)); // check if game is won

    TieGame(is_tie(board));// check if game is tied
}

void MainWindow::on_pushButton_4_clicked()
{
    if(player_turn == 1)
    {
        player_id = 1;
        QPixmap X(":/Images/Images/X.png");
        ui->label_4->setPixmap(X.scaled(150,145));
        player_turn++;
        board[0][1] = 'X';
    }
    else
    {
        player_id = 2;
        QPixmap Y(":/Images/Images/O.png");
        ui->label_4->setPixmap(Y.scaled(150,145));
        player_turn--;
        board[0][1] = 'O';
    }

    ui->label_4->show();

    EndGame(is_win(board)); // check if game is won

    TieGame(is_tie(board));// check if game is tied
}

void MainWindow::on_pushButton_5_clicked()
{
    if(player_turn == 1)
    {
        player_id = 1;
        QPixmap X(":/Images/Images/X.png");
        ui->label_5->setPixmap(X.scaled(150,145));
        player_turn++;
        board[1][1] = 'X';
    }
    else
    {
        player_id = 2;
        QPixmap Y(":/Images/Images/O.png");
        ui->label_5->setPixmap(Y.scaled(150,145));
        player_turn--;
        board[1][1] = 'O';
    }
    ui->label_5->show();

    EndGame(is_win(board)); // check if game is won

    TieGame(is_tie(board));// check if game is tied
}

void MainWindow::on_pushButton_6_clicked()
{
    if(player_turn == 1)
    {
        player_id = 1;
        QPixmap X(":/Images/Images/X.png");
        ui->label_6->setPixmap(X.scaled(150,145));
        player_turn++;
        board[2][1] = 'X';
    }
    else
    {
        player_id = 2;
        QPixmap Y(":/Images/Images/O.png");
        ui->label_6->setPixmap(Y.scaled(150,145));
        player_turn--;
        board[2][1] = 'O';
    }

    ui->label_6->show();

    EndGame(is_win(board)); // check if game is won

    TieGame(is_tie(board));// check if game is tied
}

void MainWindow::on_pushButton_7_clicked()
{
    if(player_turn == 1)
    {
        player_id = 1;
        QPixmap X(":/Images/Images/X.png");
        ui->label_7->setPixmap(X.scaled(150,145));
        player_turn++;
        board[0][2] = 'X';
    }
    else
    {
        player_id = 2;
        QPixmap Y(":/Images/Images/O.png");
        ui->label_7->setPixmap(Y.scaled(150,145));
        player_turn--;
        board[0][2] = 'O';
    }

    ui->label_7->show();

    EndGame(is_win(board)); // check if game is won

    TieGame(is_tie(board));// check if game is tied
}

void MainWindow::on_pushButton_8_clicked()
{
    if(player_turn == 1)
    {
        player_id = 1;
        QPixmap X(":/Images/Images/X.png");
        ui->label_8->setPixmap(X.scaled(150,145));
        player_turn++;
        board[1][2] = 'X';
    }
    else
    {
        player_id = 2;
        QPixmap Y(":/Images/Images/O.png");
        ui->label_8->setPixmap(Y.scaled(150,145));
        player_turn--;
        board[1][2] = 'O';
    }

    ui->label_8->show();

    EndGame(is_win(board)); // check if game is won

    TieGame(is_tie(board));// check if game is tied
}

void MainWindow::on_pushButton_9_clicked()
{
    if(player_turn == 1)
    {
        player_id = 1;
        QPixmap X(":/Images/Images/X.png");
        ui->label_9->setPixmap(X.scaled(150,145));
        player_turn++;
        board[2][2] = 'X';
    }
    else
    {
        player_id = 2;
        QPixmap Y(":/Images/Images/O.png");
        ui->label_9->setPixmap(Y.scaled(150,145));
        player_turn--;
        board[2][2] = 'O';
    }

    ui->label_9->show();

    EndGame(is_win(board)); // check if game is won

    TieGame(is_tie(board));// check if game is tied
}

bool MainWindow::is_tie(char board[3][3])
{
    bool tie = true;

        for (int row = 0; row < 3; row++)
        {
            for (int col = 0; col < 3; col++)
            {
                if (board[row][col] != '*')
                {

                }
                else
                {
                    tie = false;
                    break;
                }
            }

            if (tie == false)
            {
                break;
            }
        }

        return tie;
}

void MainWindow::TieGame(bool Game_Status)
{
    if(Game_Status == true)
    {
        QMessageBox Tie;

        Tie.setText("Tie Game!");
        Tie.exec();
        QApplication::quit();
    }
}

void MainWindow::EndGame(bool Game_Status)
{
    if(Game_Status == true)
    {
        QMessageBox Winner;

        if(player_id == 1)
        {
            Winner.setText("Player 1 wins!");
            Winner.exec();
            QApplication::quit();
            for (int x = 0; x < 3;x++) {
                for (int y = 0; y < 3;y++) {
                    std::cout << board[x][y];
                }

                std::cout << "\n";
            }
        }
        else if(player_id == 2)
        {
            Winner.setText("Player 2 wins!");
            Winner.exec();
            QApplication::quit();
            for (int x = 0; x < 3;x++) {
                for (int y = 0; y < 3;y++) {
                    std::cout << board[x][y];
                }

                std::cout << "\n";
            }
        }
    }
}



bool MainWindow::is_win(char board[3][3])
{
    if (board[0][0] == board[0][1] && board[0][1] == board[0][2] && board[0][0] != '*')
    {
        return true;
    }

    else if (board[1][0] == board[1][1] && board[1][1] == board[1][2] && board[1][0] != '*')
    {
        return true;
    }

    else if (board[2][0] == board[2][1] && board[2][1] == board[2][2] && board[2][0] != '*')
    {
        return true;
    }

    else if (board[0][0] == board[1][0] && board[1][0] == board[2][0] && board[0][0] != '*')
    {
        return true;
    }

    else if (board[0][1] == board[1][1] && board[1][1] == board[2][1] && board[0][1] != '*')
    {
        return true;
    }

    else if (board[0][2] == board[1][2] && board[1][2] == board[2][2] && board[0][2] != '*')
    {
        return true;
    }

    else if (board[0][0] == board[2][2] && board[1][1] == board[2][2] && board[0][0] != '*')
    {
        return true;
    }

    else if (board[2][0] == board[1][1] && board[1][1] == board[0][2] && board[2][0] != '*')
    {
        return true;
    }

    return false;
}



