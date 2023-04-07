#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#define UNITLENGTH 50

#include <QMainWindow>
#include <string>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

    //disturb(.cpp)
    int dist_alg[20];
    std::string dist_alg_txt;


public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

    //disturb(.cpp)
    int digitalSteps();
    int singleStep();

    //DIYfuncs(.cpp)realize with c
    int randnum(int min,int max);

private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
