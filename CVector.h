#pragma once
#include<iostream>
#include <vector>
using namespace std;
class CVector {
    vector<double> vt;
    int n;
public:
    friend istream& operator>>(istream& in, CVector& other);
    friend ostream& operator<<(ostream& out, CVector other);

    CVector operator+(CVector& other);
    CVector operator-(CVector& other);

    void tichVH(CVector other);
    double operator[](int i);
    int size() { return n; }
};
