#include <bits/stdc++.h>
using namespace std;

// Operator overloading example
class Complex
{
private:
    double real;
    double imaginary;

public:
    Complex(double r = 0.0, double i = 0.0) : real(r), imaginary(i) {}

    // Overloading the + operator
    Complex operator+(const Complex &other) const
    {
        Complex result;
        result.real = real + other.real;
        result.imaginary = imaginary + other.imaginary;
        return result;
    }

    // Overloading the << operator for printing
    friend ostream &operator<<(ostream &os, const Complex &c)
    {
        os << c.real << " + " << c.imaginary << "i";
        return os;
    }
};

int main()
{
    // Want to see the difference between reference and pointer?
    int x = 5;
    int y = 10;
    int *ptr = &x;
    int &ref = x;

    cout << "Value of x: " << x << endl;
    cout << "Value of *ptr: " << *ptr << endl;
    cout << "Value of ref: " << ref << endl;

    ref = y;
    cout << "Value of x after modification: " << x << endl;
    cout << "Value of *ptr after modification: " << *ptr << endl;
    cout << "Value of ref after modification: " << ref << endl;

    Complex c1(2.5, 3.7);
    Complex c2(1.8, 2.9);

    Complex sum = c1 + c2;
    cout << "Sum: " << sum << endl;

    return 0;
}