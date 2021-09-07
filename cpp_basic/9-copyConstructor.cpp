#include <iostream>

class MyClas
{
     int a;
     int *p;

     MyClas(int x)
     {
          a = x;
          p = new int[a];
     }

     MyClas(MyClas &mC)
     {
          a = mC.a;
          //p = mC.p;// this not creates new array so p wil show copied object's address
          p = new int[a]; // use this
     }
};

int main()
{
     MyClas x(3);
     MyClas y(x);
     std::cout << "hello world";

     return 0;
}