//increment operator overloading
#include <bits/stdc++.h>
using namespace std;

class myInt
{
private:
    int i;

public:
    void print()
    {
        cout << i << '\n';
    }
    myInt() {}
    myInt(int i) { this->i = i; }

    // prefix
    myInt operator++()
    {
        this->i = this->i + 1;
        return *this;
    }
    // postfix
    myInt operator++(int)
    {
        return myInt(this->i + 1);
        // this->i++;
    }
};

int main()
{
    // Operator overloading -> atleast one data type must be user defined;
    int a = 5;
    int b = a++;
    // cout << a << "\t" << b << "\n";

    myInt m(5);
    myInt n = m++;
    n.print();
    m.print();

    // int a = 1, b = 2;
    // int c = a + b; // a.+(b)
}