//
// Created by alex on 13.07.2022.
//
#include <QMainWindow>
#include <QtWidgets/QLCDNumber>
extern int vol;
extern int ch;


class PduMainWindow : public QMainWindow {
Q_OBJECT
public:
    PduMainWindow(QWidget* parent = nullptr): QMainWindow(parent){}
    QLCDNumber* lcdNumber = nullptr;
    QLCDNumber* lcdNumber_2 = nullptr;
public slots:
    void click1(){lcdNumber_2->display(1);};
    void click2(){lcdNumber_2->display(2);};
    void click3(){lcdNumber_2->display(3);};
    void click4(){lcdNumber_2->display(4);};
    void click5(){lcdNumber_2->display(5);};
    void click6(){lcdNumber_2->display(6);};
    void click7(){lcdNumber_2->display(7);};
    void click8(){lcdNumber_2->display(8);};
    void click9(){lcdNumber_2->display(9);};
    void click0(){lcdNumber_2->display(0);};
    void volup1(){
        if(vol >= 0 && vol <= 90) vol += 10;
        lcdNumber->display(vol);};
    void voldown(){
        if(vol >= 10 && vol <= 100) vol -= 10;
        lcdNumber->display(vol);};
    void chup(){
        if(ch >= 0 && ch <= 8) ch++;
        lcdNumber_2->display(ch);
    };
    void chdown(){
        if(ch >= 1 && ch <= 9) ch--;
        lcdNumber_2->display(ch);
    };

};
#ifndef TASK3_PDUMAINWINDOW_H
#define TASK3_PDUMAINWINDOW_H

#endif //TASK3_PDUMAINWINDOW_H
