using namespace std;
#include "sophuc.h";
sophuc::sophuc(double a, double b){
    this->a = a;
    this->b=b;
}

sophuc sophuc::operator+( sophuc& other) {
	sophuc s;
	s.a=a+other.a;
	s.b=b+other.b;
	return s;
}
sophuc sophuc::operator-( sophuc& other) {
	sophuc s;
	s.a=a-other.a;
	s.b=b-other.b;
	return s;
}
sophuc sophuc::operator*( sophuc& other) {
	sophuc s;
	s.a= a * other.a - b*other.b;
	s.b= a * other.b + other.a *b;
	return s;
}
sophuc sophuc::operator/( sophuc& other) {
	sophuc s;
	s.a=(a * other.a + b * other.b)/(other.a * other.a + other.b * other.b);
	s.b=(b * other.a - a * other.b)/(other.a * other.a + other.b * other.b);
	return s;
}
bool sophuc::operator==(sophuc& other) {
    return a == other.a && b == other.b;
}

bool sophuc::operator!=(sophuc& other) {
    return !(*this == other);
}
istream& operator>>(istream& in, sophuc& other){
    cout<<"Phan thuc: ";
    in>>other.a;
    cout<<"Phan ao: ";
    in>>other.b;
    return in;
}
ostream& operator<<(ostream& out, sophuc other){
    if (other.a == 0 && other.b == 0) out << "0";
    else if (other.a == 0) out << other.b << "i";
    else if (other.b == 0) out << other.a;
    else out << other.a << (other.b > 0 ? "+" : "") << other.b << "i";
    return out;
}
