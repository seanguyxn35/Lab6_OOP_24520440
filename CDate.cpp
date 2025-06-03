#include "CDate.h"
#include <iostream>
using namespace std;

istream& operator>>(istream& in, CDate& other) {
	cout<<"Nhap vao ngay: ";
	in>>other.ngay;
	cout<<"Nhap vao thang: ";
	in>>other.thang;
	cout<<"Nhap vao nam: ";
	in>>other.nam;
	other.chuanHoa();
	return in;
}
ostream& operator<<(ostream& out, CDate other) {
	out << (other.ngay < 10 ? "0" : "") << other.ngay << "/"<< (other.thang< 10 ? "0" : "") << other.thang<< "/"<< (other.nam < 10 ? "0" : "") << other.nam;
	return out;
}
CDate CDate::operator+(int x) {
	CDate tmp= *this;
	tmp.ngay+=x;
	tmp.chuanHoa();
	return tmp;
}
CDate CDate::operator-(int x) {
	CDate tmp= *this;
	tmp.ngay-=x;
	tmp.chuanHoa();
	return tmp;
}
CDate CDate::operator++() {
	ngay++;
	chuanHoa();
	return *this;
}
CDate CDate::operator--() {
	ngay--;
	chuanHoa();
	return *this;
}
CDate CDate::operator++(int) {
	CDate tmp = *this;
	ngay++;
	chuanHoa();
	return tmp;
}
CDate CDate::operator--(int) {
	CDate tmp = *this;
	ngay--;
	chuanHoa();
	return tmp;
}
