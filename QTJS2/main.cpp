#pragma execution_character_set("utf-8")
#include "mainwindow.h"
#include <QApplication>
#include "frminput.h"

int main(int argc, char *argv[])
{
    //qputenv("QT_IM_MODULE", QByteArray("qtvirtualkeyboard"));虚拟键盘
    QApplication a(argc, argv);
    MainWindow w;
    w.show();
    int width = w.width();
    int height = w.height();

//    QPoint pos = w.pos();



    return a.exec();
}
