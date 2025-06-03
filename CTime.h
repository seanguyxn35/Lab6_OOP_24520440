#pragma once
using namespace std;
class Ctime{
    int gio,phut,giay;
    void chuanHoa() {
        if (giay >= 60) {
            phut += giay / 60;
            giay %= 60;
        }
        if (phut >= 60) {
            gio += phut / 60;
            phut %= 60;
        }
        gio = (gio + 24) % 24;
    }
    public:
    friend istream& operator>>(istream& in, Ctime& other);
    friend ostream& operator<<(ostream& out, Ctime other);

    Ctime operator+(int x);
    Ctime operator-(int x);
    Ctime operator++();
    Ctime operator--();
    Ctime operator++(int);
    Ctime operator--(int);
};
