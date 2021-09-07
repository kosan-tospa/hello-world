#include <iostream>
#include <memory>
using namespace std;

class Test
{
    int x = 10;
    int y = 13;

public:
    Test(int a, int b)
    {
        x = a;
        y = b;
    }
    Test() : Test(1, 1) // non parameterized con. initialized deafult value by parameterized con 
    {
    }
};
int main()
{
}