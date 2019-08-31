#include "welcomhandeler.h"
#include "iostream"
using namespace std;
welcomHandeler::welcomHandeler()
{

}
void welcomHandeler::writeLine(){

    cout<<"Welcom to signals and slot example"<<endl;
    emit this->lineWritten();
}
