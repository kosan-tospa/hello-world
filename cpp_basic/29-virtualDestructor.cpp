#include <iostream>
using namespace std;

// class demo
// {
//     int *p;

// public:
//     demo()
//     {
//         p=new int[10];
// 	     	cout<<"constructor of demo"<<endl;
//     }
//     ~demo()
//     {
//         delete[] p;
//         cout << "destructor of demo" << endl;
//     }
// };
// void fun()
// {
//     demo *p = new demo();
//     delete p;
// }
// int main()
// {
//     fun();
// }

class base
{
public:
    virtual ~base() // if there is no virtual word just base destructor will called.
    {               // with virtual word  first derived destructor then base destructor will called
        cout << "destructor of base" << endl;
    }
};

class derived : public base
{
public:
    ~derived()
    {
        cout << "destructor of derived" << endl;
    }
};

void fun()
{
    base *p = new derived();
    delete p;
}
int main()
{
    fun();
}