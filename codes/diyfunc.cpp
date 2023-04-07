#include "mainwindow.h"
#include "ui_mainwindow.h"
#include <stdio.h>
#include <time.h>

MainWindow::randnum(int min,int max){
    //randnum(max,min) range:(min,max-min)(not include max，include min)
    int result;
    srand((unsigned)time(NULL));
    result=rand();
    result=result%(max-min)+min;
    return result;
}
