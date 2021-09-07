#include <iostream>

int main()
{
    int x = 10;

    int &y = x;                   //reference must be initialized while declaration
    std::cout << x << std::endl;  // 10
    std::cout << y << std::endl;  // 10
    std::cout << &x << std::endl; // address of x
    std::cout << &y << std::endl; // address of x

    int b = 11;
    //&y = b;  // ** can not assign new value to reference

    int &c = b;
    y = c; // assign value of b(ref z) to x(ref y)

    std::cout << x << std::endl; // 11
    std::cout << y << std::endl; // 11

    b++;

    std::cout << c << std::endl; // 12
    std::cout << y << std::endl; // 11
    
    return 0;
}

/*
int x=10;   // x variable

int *y=&x;   // y pointer variable

int * &z=y;   // z reference to a pointer variable

*/