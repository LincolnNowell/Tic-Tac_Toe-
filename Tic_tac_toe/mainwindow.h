#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QMessageBox>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);

    ~MainWindow();

    int player_turn = 1;// holds which player turn it is
    int player_id = 1;// hold the number of the player


    // a 2 demsional array that mirrors the ui
    char board[3][3] = {'*','*','*',
                        '*','*','*',
                        '*','*','*'};

    //check if the game is tied
    bool is_tie(char board[3][3]);

    //check if the game is won
    bool is_win(char board[3][3]);

    //displays message if game is tied
    void TieGame(bool Game_Status);

    //displays message if game is won
    void EndGame(bool Game_Status);

    void check_array(char board[][3]);

private slots:

    //protoype events that fire when the pushbutton is clicked
    void on_pushButton_clicked();

    void on_pushButton_2_clicked();

    void on_pushButton_3_clicked();

    void on_pushButton_4_clicked();

    void on_pushButton_5_clicked();

    void on_pushButton_6_clicked();

    void on_pushButton_7_clicked();

    void on_pushButton_8_clicked();

    void on_pushButton_9_clicked();

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
