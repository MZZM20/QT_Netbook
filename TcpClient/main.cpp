#include "tcpclient.h"
#include <QApplication>
#include "book.h"
//#include "sharefile.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    QFont font("Times", 24, QFont::Bold);
    a.setFont(font);
//    QString str = "okk";
//    qDebug() << str.size();
//    char c[40];
//    c[3] = -10;
//    qDebug() << (int)c[3];
//    memcpy(c, str.toStdString().c_str(), str.size());
//    qDebug() << c;
//    qDebug() << (int)c[3];

//    ShareFile w;
//    w.test();
//    w.show();

//    TcpClient w;
//    w.show();
    TcpClient::getInstance().show();

//    Book w;
//    w.show();

    return a.exec();
}
