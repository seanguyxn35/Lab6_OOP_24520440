#include <iostream>
using namespace std;
#include <vector>
#include "CVector.h"


istream& operator>>(istream& in, CVector& other) {
    cout << "Nhap so chieu vector: ";
    in >> other.n;
    other.vt.resize(other.n);
    cout << "Nhap cac phan tu: ";
    for (int i = 0; i < other.n; ++i) {
        in >> other.vt[i];
    }
    return in;
}

ostream& operator<<(ostream& out, CVector other) {
    for (int i = 0; i < other.n; ++i) {
        out << other.vt[i] << " ";
    }
    return out;
}

CVector CVector::operator+(CVector& other) {
    if(n!= other.n) {
        cout<<"Hai vector khong cung bac.";
        return CVector();
    }
    CVector result;
    result.n = n;
    result.vt.resize(n);
    for (int i = 0; i < n; ++i) {
        result.vt[i] = vt[i] + other.vt[i];
    }
    return result;
}

CVector CVector::operator-(CVector& other) {
    if(n!= other.n) {
        cout<<"Hai vector khong cung bac.";
        return CVector();
    }
    CVector result;
    result.n = n;
    result.vt.resize(n);
    for (int i = 0; i < n; ++i) {
        result.vt[i] = vt[i] - other.vt[i];
    }
    return result;
}
void CVector::tichVH(CVector other){
    cout<<"Tich vo huong: ";
    if(n!= other.n) {
        cout<<"Hai vector khong cung bac.";
        return ;
    }
    double res=0;
    for(int i=0;i<n;i++){
        res+=vt[i]* other.vt[i];
    }
    cout<<res<<endl;

}
double CVector::operator[](int i) {
    return vt[i];
}
