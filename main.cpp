#include <iostream>
#include "sophuc.h";
using namespace std;

int main()
{
	sophuc a,b;
	cin>>a;
	cin>>b;
	cout<<"a + b: "<<(a+b)<<endl;
	cout<<"a - b: "<<(a-b)<<endl;
	cout<<"a * b: "<<(a * b)<<endl;
	cout<<"a / b: "<<(a/ b)<<endl;
	if(a==b){
	    cout<<"a = b";
	}
	else cout<<"a khac b";


	return 0;
}
