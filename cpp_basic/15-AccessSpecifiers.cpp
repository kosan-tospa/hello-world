#include <iostream>
class Base
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funcBase()
    {
        a = 10;
        b = 20;
        c = 30;
    }
};

class Derived : Base
{
public:
    void funcDerived()
    {
        // a = 1; // ** can not access to Base Class private member
        b = 2; // can access to Base Class protected member
        c = 3; // public member always accessible
    }
};

int main()
{
    std::cout << "hello world";

    return 0;
}

//
//______________________|private__|protected__|public__|
// inside class         |    x    |     x     |    x   |
//______________________|_________|___________|________|
// inside derived class |    -    |     x     |    x   |
//______________________|_________|___________|________|
// on object            |    -    |     -     |    x   |
//______________________|_________|___________|________|
//
