#pragma once
#include<iostream>

using namespace std;
class CDaThuc{
	int bac;
	double heSo[50];


public:

	friend istream& operator>>(istream& in, CDaThuc& other);
	friend ostream& operator<<(ostream& out, CDaThuc other);

	CDaThuc operator+(CDaThuc& other);
	CDaThuc operator-(CDaThuc& other);
	CDaThuc operator*(CDaThuc& other);
	CDaThuc operator/(int x);
	double tinhGT(int x);
};
