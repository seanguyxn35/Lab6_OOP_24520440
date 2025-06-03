#include "CVector.h"
using namespace std;
#include <iostream>
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
ostream& operator<<(ostream& out, const CVector& other) {
    for (int i = 0; i < other.n; ++i) {
        out << other.vt[i] << " ";
    }
    return out;
}
CVector CVector::operator+(const CVector& other) const {
    if (n != other.n) {
        cout << "Hai vector khong cung chieu!\n";
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
CVector CVector::operator-(const CVector& other) const {
    if (n != other.n) {
        cout << "Hai vector khong cung chieu!\n";
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
double& CVector::operator[](int i) {
    return vt[i];
}
