#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include <QLabel>

namespace Ui {
class MainWindow;
}

struct card_count{
    int
    available_suits = 4,
    diamond_card = 1,
    heart_card = 1,
    club_card = 1,
    spade_card = 1;
};

struct card_info {
    int
    card_number,
    card_suit;
};

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

private:
    QString Get_Card_Name(int, int);
    int randomizer(int);

    Ui::MainWindow *ui;


    QLabel *images[10];
    QString Image_File;
    QString Table_Image_File;
    card_count all_cards[13];
    card_info user_cards[5];
    int user_card_size;
    card_info dealers_cards[5];
    int dealers_card_size;
};

#endif // MAINWINDOW_H
