#include<iostream>
using namespace std;
#include "CDate.h"
int main() {
	CDate t;
	int x,y;
	cin>>t;
	cout<<"Ngay ++: "<<++t<<endl;
	cout<<"Ngay --: "<<--t<<endl;
	cout<<"Them vao ngay: ";
	cin>>x;
	cout<<t+x<<endl;
	cout<<"Tru di ngay: ";
	cin>>y;
	cout<<t-y<<endl;
}
