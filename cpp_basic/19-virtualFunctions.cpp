#include <iostream>
using namespace std;

// class Base
// {
// public:
//     virtual void fun()
//     {
//         cout << "fun of base" << endl;
//     }
// };
// class Derived : public Base
// {
// public:
//     void fun()
//     {
//         cout << "fun of derived" << endl;
//     }
// };
// int main()
// {
//     Derived d;
//     d.fun();
//     Base *ptr = &d;
//     ptr->fun(); // will print derived because Base fun is virtual
// }

class Car //abstract class
{
public:
    virtual void start() = 0; // these are pure virtual functions
    virtual void stop() = 0;  // they force to implement these functions in derived class
                              // otherwise compiler give error
};
class Innova : public Car
{
public:
    void start()
    {
        cout << "innova started" << endl;
    }

    void stop()
    {
        cout << "innova stopped" << endl;
    }
};
class Swift : public Car
{
public:
    void start()
    {
        cout << "swift started" << endl;
    }

    void stop()
    {
        cout << "swift stopped" << endl;
    }
};
int main()
{
    Car *ptr = new Innova();
    ptr->start();
    ptr = new Swift();
    ptr->start();
}