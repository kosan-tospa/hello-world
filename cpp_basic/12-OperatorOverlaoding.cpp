#include <iostream>
using namespace std;

class Complex
{
private:
    int real;
    int img;

public:
    Complex(int r = 0, int i = 0)
    {
        real = r;
        img = i;
    }

    // Complex operator+(Complex x) //member function operator overloading
    // {
    //     Complex temp;
    //     temp.real = real + x.real;
    //     temp.img = img + x.img;
    //     return temp;
    // }

    friend Complex operator+(Complex x, Complex y); // friend function operator overaloading
    friend ostream & operator<<(ostream &output, Complex &c1);
};

Complex operator+(Complex x, Complex y)
{
    Complex temp;
    temp.real = x.real + y.real;
    temp.img = x.img + y.img;
    return temp;
}

ostream & operator<<(ostream &output, Complex&c)
{
    output<<c.real<<"+i"<<c.img;
    return output;
}

int main()
{
    Complex c1(3, 7);
    Complex c2(5, 4);
    Complex c3;

    c3 = c1 + c2; // opearotor '+'  overloaded

    cout<<c3; // opearotor '<<'  overloaded


    return 0;
}