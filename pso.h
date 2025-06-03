#pragma once
#include <iostream>
using namespace std;
class pso {
private:
	int tu,mau;
          int gcd(int a, int b) {
	while (b != 0) {
		int tmp = a % b;
		a = b;
		b = tmp;
	}
	return a;
          }

public:

	void rutgon();

    friend istream& operator>>(istream& in, pso& other);
	friend ostream& operator<<(ostream& out, pso other);
	bool operator==(const pso& other);
	bool operator<(const pso& other);
	bool operator>(const pso& other);

	pso operator+(const pso& other);
	pso operator-(const pso& other);
	pso operator*(const pso& other);
	pso operator/(const pso& other);

};
