#include <iostream>

class MyClass
{
public:
    void func1()
    {
        std::cout << "Inline";
    }
    void func2(); // to make this inline ->  inline void func2();
};

void MyClass::func2()
{
    std::cout << "non-Inline";
}

int main()
{
    std::cout << "hello world";

    MyClass ex;

    ex.func1();
    ex.func2();

    return 0;
}

/*
simple single line functions can be made as inline.
• inline functions will save time. call will not be made and activation
record will not be created.
• if we define a function inside a class and if we call it multiple times
in our main function. Then the code will be copied at all places
wherever it is called in the code section of the memory.
• inline functions will be copied in place of function call. they will not
work like normal functions. they dont require function call, this will
save little time
• we should write property function get/set as inline. functions with
loops should be avoided.
• copying of code is decided by compiler. writing inline is a hint to
compiler
 */
 