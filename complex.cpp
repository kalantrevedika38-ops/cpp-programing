#include <iostream>
using namespace std;

class Complex
{
public:
    int real, imag;

    void input()
    {
        cin >> real >> imag;
    }

    void add(Complex c)
    {
        cout << "Addition = "
             << real + c.real << " + "
             << imag + c.imag << "i" << endl;
    }

    void sub(Complex c)
    {
        cout << "Subtraction = "
             << real - c.real << " + "
             << imag - c.imag << "i" << endl;
    }
};

int main()
{
    Complex c1, c2;

    cout << "Enter first complex number: ";
    c1.input();

    cout << "Enter second complex number: ";
    c2.input();

    c1.add(c2);
    c1.sub(c2);

    return 0;
}