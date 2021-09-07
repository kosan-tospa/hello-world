#include <iostream>
using namespace std;

class Base
{
public:
     void display()
     {
          cout << "display of base" << endl;
     }
};
class Derived : public Base
{
public:
     void display()
     {
          cout << "display of derived" << endl;
     }
};
int main()
{
     Derived d;
     d.display();// will print derived. 
     //same function in derived function provide us to add new features

     d.Base::display(); // will print base // this is the way to use  base's function
}