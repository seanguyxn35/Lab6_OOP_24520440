#include "pso.h"
using namespace std;
void pso::rutgon() {
	int c=gcd(tu,mau);
	tu/=c;
	mau/=c;
}

bool pso::operator==(const pso& other) {
	return (tu * other.mau == mau * other.tu);
}
bool pso::operator<(const pso& other) {
	return (tu*other.mau < mau*other.tu);

}
bool pso::operator>(const pso& other) {
	return (tu * other.mau > mau * other.tu);
}
pso pso::operator+(const pso& other) {
	pso s;
	s.mau=mau*other.mau;
	s.tu=tu*other.mau+other.tu*mau;
	s.rutgon();
	return s;
}
pso pso::operator-(const pso& other) {
	pso s;
	s.mau=mau*other.mau;
	s.tu=tu*other.mau-other.tu*mau;
	s.rutgon();
	return s;
}
pso pso::operator*(const pso& other) {
	pso s;
	s.mau=mau*other.mau;
	s.tu=tu*other.tu;
	s.rutgon();
	return s;
}
pso pso::operator/(const pso& other) {
	pso s;
	s.mau=mau*other.tu;
	s.tu=tu*other.mau;
	s.rutgon();
	return s;
}
istream& operator>>(istream& in, pso& other) {
    cout << "Nhap tu: ";
    in >> other.tu;
    cout << "Nhap mau (khac 0): ";
    in >> other.mau;
    while (other.mau == 0) {
        cout << "Mau khac 0. Nhap lai: ";
        in >> other.mau;
    }
    other.rutgon();
    return in;
}
ostream& operator<<(ostream& out, pso other) {
    if (other.tu == 0) out << 0;
    else if (other.mau == 1) out << other.tu;
    else out << other.tu << "/" << other.mau;
    return out;
}
