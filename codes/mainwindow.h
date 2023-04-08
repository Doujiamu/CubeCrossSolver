#ifndef MAINWINDOW_H
#define MAINWINDOW_H


#include <QMainWindow>
#include <string>
#include <QDebug>
#include <QString>
#include <QFont>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    //menu - Menu
    int UNITLENGTH = 50;
    void setsize_small();
    void setsize_middle();
    void setsize_large();
    void refresh();

    //disturb(.cpp)
    QFont dis_font;
    int lastCode = -1;
    int dist_alg[20];
    QString dist_alg_txt;
//    void newDisturbClicked();


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //disturb(.cpp)
    void updateDisturb();  //main func of 'disturb'
    void digitalSteps(); //digital step
    int singleStep();   //make single step
    void digitalToTxt();//turn digital to text
    void testAlg();     //testing inside

    //DIYfuncs(.cpp)realize with c
    int randnum(int min,int max);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
