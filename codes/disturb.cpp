#include "mainwindow.h"
#include "ui_mainwindow.h"


MainWindow::singleStep(){
    int code_1; //1step code
    int code_2; //2step code

    code_1 = randnum(1,7) * 10;
    code_2 = code_1 + randnum(1,4);

    return code_2;
}
