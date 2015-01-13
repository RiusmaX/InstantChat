#include <QtGui/QApplication>
#include "instantchat.h"

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    InstantChat w;
    w.show();
    
    return a.exec();
}
