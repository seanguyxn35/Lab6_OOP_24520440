#pragma once
using namespace std;
#include <iostream>
#include <vector>
class CVector {
    vector<double> vt;
    int n;
public:
    friend istream& operator>>(istream& in, CVector& other);
    friend ostream& operator<<(ostream& out, const CVector& other);

    CVector operator+(const CVector& other) const;
    CVector operator-(const CVector& other) const;

    double& operator[](int i);
    int size() const { return n; }

    friend class CMatrix;
};
