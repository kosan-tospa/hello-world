#include <iostream>
using namespace std;

/*program for final keyword

*/
class Parent final 
{
    virtual void show() final
    {
    }
};
class Child : Parent // final classes does not allow to inheritance
{
    void show()  //  final functions does not allow overriding 
    {
    }
};