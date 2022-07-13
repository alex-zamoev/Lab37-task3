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
    void click1(){
        ch = 1;
        lcdNumber_2->display(ch);
    };
    void click2(){
        ch = 2;
        lcdNumber_2->display(ch);
    };
    void click3(){
        ch = 3;
        lcdNumber_2->display(ch);
    };
    void click4(){
        ch = 4;
        lcdNumber_2->display(ch);
    };
    void click5(){
        ch = 5;
        lcdNumber_2->display(ch);
    };
    void click6(){
        ch = 6;
        lcdNumber_2->display(ch);
    };
    void click7()
    {
        ch = 7;
        lcdNumber_2->display(ch);
    };
    void click8(){
        ch = 8;
        lcdNumber_2->display(ch);
    };
    void click9(){
        ch = 9;
        lcdNumber_2->display(ch);
    };
    void click0(){
        ch = 0;
        lcdNumber_2->display(ch);
    };
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
