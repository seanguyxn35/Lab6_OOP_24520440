
#include<iostream>
#include <cmath>
using namespace std;
#include "CDaThuc.h"
int main() {
	CDaThuc a,b;
	cin>>a;
	cin>>b;
	cout<<"Cong hai da thuc: "<<a+b<<endl;
	cout<<"Tru hai da thuc: "<<a-b<<endl;
	cout<<"Nhan hai da thuc: "<<a*b<<endl;
	cout<<"Chia da thuc A cho 2: "<<a/2<<endl;
	cout<<"Nhap vao x va tinh gia tri cho A va B: ";
	int x;
	cin>>x;
	cout<<a.tinhGT(x)<<" "<<b.tinhGT(x);

}
