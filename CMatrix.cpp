#include <iostream>
using namespace std;
#include <vector>
#include "CMatrix.h"
istream& operator>>(istream& in, CMatrix& m) {
    cout << "Nhap so hang va cot: ";
    in >> m.rows >> m.cols;
    m.matrix.resize(m.rows, vector<double>(m.cols));
    cout << "Nhap cac phan tu cua ma tran:\n";
    for (int i = 0; i < m.rows; ++i)
        for (int j = 0; j < m.cols; ++j)
            in >> m.matrix[i][j];
    return in;
}

ostream& operator<<(ostream& out, const CMatrix& m) {
    for (int i = 0; i < m.rows; ++i) {
        for (int j = 0; j < m.cols; ++j)
            out << m.matrix[i][j] << " ";
        out << endl;
    }
    return out;
}

CMatrix CMatrix::operator+(const CMatrix& other) const {
    if (rows != other.rows || cols != other.cols) {
        cout << "Ma tran khong cung kich thuoc!\n";
        return CMatrix();
    }
    CMatrix result;
    result.rows = rows;
    result.cols = cols;
    result.matrix.resize(rows, vector<double>(cols));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.matrix[i][j] = matrix[i][j] + other.matrix[i][j];
    return result;
}

CMatrix CMatrix::operator-(const CMatrix& other) const {
    if (rows != other.rows || cols != other.cols) {
        cout << "Ma tran khong cung kich thuoc!\n";
        return CMatrix();
    }
    CMatrix result;
    result.rows = rows;
    result.cols = cols;
    result.matrix.resize(rows, vector<double>(cols));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.matrix[i][j] = matrix[i][j] - other.matrix[i][j];
    return result;
}

CMatrix CMatrix::operator*(const CMatrix& other) const {
    if (cols != other.rows) {
        cout << "Khong the nhan hai ma tran: so cot cua A khac so hang cua B!\n";
        return CMatrix();
    }
    CMatrix result;
    result.rows = rows;
    result.cols = other.cols;
    result.matrix.resize(rows, vector<double>(other.cols, 0));
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < other.cols; ++j)
            for (int k = 0; k < cols; ++k)
                result.matrix[i][j] += matrix[i][k] * other.matrix[k][j];
    return result;
}

CVector CMatrix::operator*(const CVector& vec) const {
    if (cols != vec.size()) {
        cout << "So cot ma tran khong bang so chieu vector!\n";
        return CVector();
    }
    CVector result;
    result.n = rows;
    result.vt.resize(rows, 0);
    for (int i = 0; i < rows; ++i)
        for (int j = 0; j < cols; ++j)
            result.vt[i] += matrix[i][j] * vec.vt[j];
    return result;
}

vector<double>& CMatrix::operator[](int i) {
    return matrix[i];
}
