#include "mainwindow.h"
#include "ui_mainwindow.h"

void MainWindow::updateDisturb(){
    digitalSteps();
    digitalToTxt();

    ui->disturb_main->setText(dist_alg_txt);
}

void MainWindow::digitalSteps(){
    int i = 0; //range signal

    for(i=0;i<20;i++){
        dist_alg[i] = singleStep();
    }

}

int MainWindow::singleStep(){
    int code_1; //1step code
    int code_2; //2step code

    do{
        code_1 = randnum(1,7) * 10;
    }while(code_1 == lastCode);
    lastCode = code_1;
    code_2 = code_1 + randnum(1,4);

    return code_2;
}

void MainWindow::digitalToTxt(){
    char buf;
    int i;

    for(i=0;i<20;i++){
        switch(dist_alg[i]/10){ //RLUDFB
        case 1:
            buf = 'R';break;
        case 2:
            buf = 'L';break;
        case 3:
            buf = 'U';break;
        case 4:
            buf = 'D';break;
        case 5:
            buf = 'F';break;
        case 6:
            buf = 'B';break;
        }

        dist_alg_txt.push_back(buf);

        if((dist_alg[i] - dist_alg[i]/10*10) == 1){
            dist_alg_txt.push_back(' ');
            continue;
        }
        else{
            switch (dist_alg[i]-dist_alg[i]/10*10) {
            case 2:
                buf = '2';break;
            case 3:
                buf = '\'';break;
            }
        }

        dist_alg_txt.push_back(buf);
        dist_alg_txt.push_back(' ');
    }
}

void MainWindow::testAlg(){
    qDebug() << dist_alg_txt << '\n';
}


