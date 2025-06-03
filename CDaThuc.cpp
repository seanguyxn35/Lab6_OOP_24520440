#include "CDaThuc.h"
#include<iostream>
#include <cmath>


istream& operator>>(istream& in, CDaThuc& other) {
	cout << "Nhap bac cua da thuc: ";
    in >> other.bac;
    for (int i = other.bac; i >= 0; i--) {
        cout << "He so x^" << i << ": ";
        in >> other.heSo[i];
    }
	return in;
}
ostream& operator<<(ostream& out, CDaThuc other) {
	bool zero = true;
	for(int i=other.bac;i>=0;--i){
	    if (other.heSo[i] != 0) {
            zero = false;
            if (i != other.bac && other.heSo[i] > 0) out << "+ ";
            out << other.heSo[i];
            if (i > 0) out << "x";
            if (i > 1) out << "^" << i;
            out << " ";
        }

	}
	if(zero) out<<0;
	return out;
}
CDaThuc CDaThuc::operator+(CDaThuc& other) {
	CDaThuc tmp;
	tmp.bac= max(bac, other.bac);
	for(int i=0;i<=tmp.bac;i++){
	    tmp.heSo[i]+=(heSo[i] + other.heSo[i]);
	}
	return tmp;
}
CDaThuc CDaThuc::operator-(CDaThuc& other) {
	CDaThuc tmp;
	tmp.bac= max(bac, other.bac);
	for(int i=0;i<=tmp.bac;i++){
	    tmp.heSo[i]=heSo[i] - other.heSo[i];
	}
	return tmp;
}
CDaThuc CDaThuc::operator*(CDaThuc& other){
    CDaThuc tmp;
    tmp.bac=max(bac, other.bac);
    for (int i = 0; i <= bac; i++) {
        for (int j = 0; j <= other.bac; j++) {
            tmp.heSo[i + j] += heSo[i] * other.heSo[j];
        }
    }
    return tmp;
}
CDaThuc CDaThuc::operator/(int x) {
    CDaThuc tmp = *this;
    for (int i = 0; i <= bac; i++) {
        tmp.heSo[i] /= x;
    }
    return tmp;
}
double CDaThuc::tinhGT(int x){
    double sum=0;
    for(int i=0;i<=bac;i++){
        sum+=pow(x,i)*heSo[i];
    }
    return sum;
}
