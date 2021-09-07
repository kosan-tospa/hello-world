#include <iostream>

#define print std::cout

#define max(x, y) (x > y ? x : y)
#define msg(x) #x // expands to "x"
#define pI 3.1425
#ifndef pI
#define pI 3
#endif

int main()
{

    print << pI << std::endl; 
    print << max(10, 12) << std::endl; 
    print << msg(hello) << std::endl;  // expands to "hello"
}
