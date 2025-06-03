#include <iostream>
#include <vector>
using namespace std;
#include "CVector.h"
#include "CMatrix.h"





int main() {
    CMatrix A, B;
    CVector C;

    cin >> A;
    cin >> B;
    cin >> C;

    cout << "\nMa tran A:\n" << A;
    cout << "\nMa tran B:\n" << B;
    cout << "\nVector C:\n" << C << endl;

    cout << "\nKet qua A + B:\n" << A + B;
    cout << "\nKet qua A - B:\n" << A - B;
    cout << "\nKet qua A * B:\n" << A * B;

    cout << "\nKet qua A * C: " << A * C << endl;

    return 0;
}
