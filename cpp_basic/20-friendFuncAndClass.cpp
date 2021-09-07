#include <iostream>
using namespace std;

// //friend function example
// class test
// {
// private:
//     int a;

// protected:
//     int b;

// public:
//     int c;
//     friend void fun(); // this provides access to private members of class to global func
// };
// void fun()
// {
//     test t;
//     t.a = 10;
//     t.b = 15;
//     t.c = 9;
// }


//friend class example
class your;
class my
{
private:
    int a;

protected:
    int b;

public:
    int c;
    friend your; 
};
class your
{
public:
    my m;
    void fun()
    {
        m.a = 10;
        m.b = 10;
        m.c = 10;
    }
};