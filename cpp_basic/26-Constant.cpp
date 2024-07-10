#include <iostream>

#define consDef 10 // this is just a symbol compiler puts 10 to every consDef

class Demo
{
    public:

    int k = 10;
    int l = 20;

    void Display()const //**
    {
        //k++; // this is not allowed because function defined const 
        std::cout << k << std::endl;
    }
};

void func(const int &c, int &d)
{
    //c++; //this is not allowed because parameter defined const
    d++; // this is ok
}


int main()
{
    const int cons1 = 10; //  cons1 is a variable and can not be changeable
    int x = 10;
    int y = 20;

    const int *ptr = &x; // ptr can read x value but can not modify // data is constant
    //++*ptr; not allowed to modify
    std::cout << *ptr << std::endl; // allowed to read
    ptr = &y;                       // this is ok

    int *const ptr2 = &x; // ptr2 is constant, address can not be changed
    //ptr2=&y; //this is not allowed

    const int * const ptr3 = &x; // data and pointer are both const

    return 0;
}
