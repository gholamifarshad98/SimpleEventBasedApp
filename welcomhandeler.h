#ifndef WELCOMHANDELER_H
#define WELCOMHANDELER_H

#include<QObject>
class welcomHandeler: public QObject
{
    Q_OBJECT
public:
    welcomHandeler();
public slots:
    void writeLine();
signals:
    void lineWritten();

};

#endif // WELCOMHANDELER_H
