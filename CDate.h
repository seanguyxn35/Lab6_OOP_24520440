#pragma once
#include <iostream>
using namespace std;
class CDate {
	int ngay, thang, nam;
	bool leap(int y) {
		return(y%4==0 && y%100!=0) || y%400==0;
	}
	int dayInMonth(int m, int y) {
		if (m==2 && leap(y)) return 29;
		if (m==2 ) return 28;
		if (m==1 || m==3|| m==5|| m==7|| m==8|| m==10|| m==12) return 31;
		else return 30;
	}
	void chuanHoa() {
        while (ngay > dayInMonth(thang, nam)) {
			ngay -= dayInMonth(thang, nam);
			thang++;
			if (thang > 12) {
				thang = 1;
				nam++;
			}
		}
		while(ngay <=0){
		    thang--;
		    if(thang <1){
		        thang =12;
		        nam--;
		    }
		    ngay+=dayInMonth(thang,nam);
		}
	    while(thang<1){
	        nam--;
	        thang+=12;
	    }
	}
public:
	friend istream& operator>>(istream& in, CDate& other);
	friend ostream& operator<<(ostream& out, CDate other);

	CDate operator+(int x);
	CDate operator-(int x);
	CDate operator++();
	CDate operator--();
	CDate operator++(int);
	CDate operator--(int);
};
