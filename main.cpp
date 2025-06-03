#include <iostream>
using namespace std;
#include "CVector.h"
int main(){
    CVector A,B;
    cin>>A>>B;
    cout<<"Tong hai vector: ";
    cout<<A+B<<endl;
    cout<<"Hieu hai vector: ";
    cout<<A-B<<endl;
    A.tichVH(B);
}
