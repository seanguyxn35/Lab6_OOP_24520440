#include <iostream>
using namespace std;
#include "pso.h"


int main()
{
	pso a,b;
	cin>>a;
	cin>>b;
	cout<<"a+b = "<<a+b<<endl;
	cout<<"a-b = "<<a-b<<endl;
	cout<<"a*b = "<<a*b<<endl;
	cout<<"a/b = "<<a/b<<endl;
	if(a>b) cout<<"a > b";
	else if(a<b) cout<<"a < b";
	else cout<<"a = b";
	return 0;
}
