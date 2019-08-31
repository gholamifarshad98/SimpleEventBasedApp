#include <QCoreApplication>
#include"welcomhandeler.h"
#include <QTimer>

int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);
    QTimer* timer= new QTimer();
    timer->setInterval(500);
    welcomHandeler* welh = new welcomHandeler();
    QObject::connect(timer, SIGNAL(timeout()),welh,SLOT(writeLine()));
    timer->start();
    return a.exec();
}
