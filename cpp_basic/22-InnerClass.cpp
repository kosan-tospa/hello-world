#include <iostream>
using namespace std;

class Outer
{
    class Inner;

public:
    void fun()
    {
        i.display();
    }
    class Inner
    {
    public:
        void display() // inner class can access only static members
        {
            cout << "display of inner" <<endl;
        }
    };
    Inner i;
};
int main()
{
    Outer::Inner i; // If Inner was defined in private it can not be accessed outside of Outer class
}