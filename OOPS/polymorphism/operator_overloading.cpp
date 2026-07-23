//Operator overloading
#include <bits/stdc++.h>
using namespace std;

class Complex
{
private:
    double real, imag;

public:
    void print()
    {
        cout << real << " + i" << imag << '\n';
    }
    Complex() {}
    Complex(double r, double i) : real(r), imag(i) {}

    Complex operator+(const Complex &b)
    {
        Complex c;
        c.real = this->real + b.real;
        c.imag = this->imag + b.imag;
        return c;
    }
    Complex operator-(const Complex &b)
    {
        return Complex(this->real - b.real, this->imag - b.imag);
    }
};

int main()
{
    // Operator overloading -> atleast one data type must be user defined;
    Complex c1(1, 3), c2(2, 4);
    Complex c3 = c1 + c2;
    Complex c4 = c1 - c2;
    c3.print(); // 3 + i7
    c4.print(); // -1 + -1i

    // int a = 1, b = 2;
    // int c = a + b; // a.+(b)
}