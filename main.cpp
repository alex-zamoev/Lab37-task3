#include <QApplication>
#include <QPushButton>
#include "pdumainwindow.h"
#include "./ui_pdu.h"

int ch = 0;
int vol = 0;

int main(int argc, char *argv[]) {
    QApplication a(argc, argv);

    PduMainWindow window(nullptr);
    Ui::MainWindow pdu;
    pdu.setupUi(&window);
    window.resize(240, 680);
    window.setFixedSize(window.geometry().width(),window.geometry().height());
    window.lcdNumber = pdu.lcdNumber;
    window.lcdNumber_2 = pdu.lcdNumber_2;
    window.show();
    return QApplication::exec();
}
