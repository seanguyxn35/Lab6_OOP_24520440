#include <iostream>
using namespace std;
#include "CTime.h"
istream& operator>>(istream& in, Ctime& other){
    cout<<"Nhap vao gio: ";
    in>>other.gio;
    cout<<"Nhap vao phut: ";
    in>>other.phut;
    cout<<"Nhap vao giay: ";
    in>>other.giay;
    other.chuanHoa();
    return in;
}
ostream& operator<<(ostream& out, Ctime other) {
    out << (other.gio < 10 ? "0" : "") << other.gio << ":"
        << (other.phut < 10 ? "0" : "") << other.phut << ":"
        << (other.giay < 10 ? "0" : "") << other.giay;
    return out;
}
Ctime Ctime::operator+(int x){
    Ctime tmp= *this;
    tmp.giay+=x;
    tmp.chuanHoa();
    return tmp;
}
Ctime Ctime::operator-(int x){
    Ctime tmp= *this;
    tmp.giay-=x;
    tmp.chuanHoa();
    return tmp;
}
Ctime Ctime::operator++(){
    giay++;
    chuanHoa();
    return *this;
}
Ctime Ctime::operator--(){
    giay--;
    chuanHoa();
    return *this;
}
Ctime Ctime::operator++(int) {
    Ctime tmp = *this;
    giay++;
    chuanHoa();
    return tmp;
}
Ctime Ctime::operator--(int) {
    Ctime tmp = *this;
    giay--;
    chuanHoa();
    return tmp;
}
