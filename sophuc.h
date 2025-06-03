#ifndef SOPHUC_H_INCLUDED
#define SOPHUC_H_INCLUDED
#include <iostream>
using namespace std;
class sophuc {
	double a,b;
public:
	void Nhap();
	void Xuat();
    sophuc(double a=0, double b=0);

    friend istream& operator>>(istream& in, sophuc& other);
    friend ostream& operator<<(ostream& out, sophuc other);
	sophuc operator+( sophuc& other);
	sophuc operator-( sophuc& other);
	sophuc operator*( sophuc& other);
	sophuc operator/( sophuc& other);
	bool operator==( sophuc& other);
	bool operator!=( sophuc& other);

};


#endif // SOPHUC_H_INCLUDED
