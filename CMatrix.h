#pragma once
using namespace std;
#include <vector>
#include "CVector.h"
#include <iostream>
class CMatrix {
    int rows, cols;
    vector<vector<double>> matrix;
public:
    friend istream& operator>>(istream& in, CMatrix& m);
    friend ostream& operator<<(ostream& out, const CMatrix& m);

    CMatrix operator+(const CMatrix& other) const;
    CMatrix operator-(const CMatrix& other) const;
    CMatrix operator*(const CMatrix& other) const;
    CVector operator*(const CVector& vec) const;

    vector<double>& operator[](int i);
};
