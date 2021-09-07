#include <iostream>

// int main()
// {
//     int x = 10, y = 20;
//     swap(x, y);
//     std::cout << "hello world";
// }

// //template function
// template <class T>
// T max(T a, T b)
// {
//     if (a > b)
//         return a;
//     else
//         return b;
// }

// //default parameter
// int sum(int a, int b, int c = 2) // if call is like sum(2+5) then c will 2
// {
//     return a + b + c;
// }

// //call by value
// // func call be like swap(x,y)   a=x  b=y
// // x and y wont change
// void swap(int a, int b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// //call by address
// // func call be like swap(&x, &y) // a equals x's address, b equals y's address
// // x and y will change
// void swap(int *a, int *b)
// {
//     int temp;
//     temp = *a;
//     *a = *b;
//     *b = temp;
// }

// //call by reference
// // func call be like swap(x,y)
// // **swap function will be part of caller function in machine code**
// // should be simple or compiler converts to call by address
// void swap(int &a, int &b)
// {
//     int temp;
//     temp = a;
//     a = b;
//     b = temp;
// }

// //return by address
// // call be like //int * ptr = func(5)//
// //array created in heap memory
// int * func(int size)
// {
//     int * p = new int [size];
//     for(int i=0; i<size; i++)
//     {
//       p[i]=i+1;
//     }
//     return p;
// }

// //return by reference
// //
// int &func(int &a)
// {
//     std::cout << a;
//     return a;
// }
// int main()
// {
//     int x = 10;
//     func(x) = 25; // func(x) returns a reference so, it is assignable
//     std::cout << x;
//     return 0;
// }

// //recursive functions calls itself
// // ** exit condition is important **
// void fun(int n)
// {
//     if (n > 0)
//     {
//         std::cout << n << endl;
//         fun(n - 1);
//     }
// }

// //function pointer
// int max(int x, int y)
// {
//     return x > y ? x : y;
// }
// int min(int x, int y)
// {
//     return x < y ? x : y;
// }
// int main()
// {
//     int (*fp)(int, int);
//     fp = max;
//     (*fp)(10, 5); // func max will called
//     fp = min;
//     (*fp)(10, 5); // func min will called
//     return 0;
// }