#include <iostream>
using namespace std;

/*
[capture list] (parameter list) returnType {body};

*/
int main()
{

    auto f = []() { cout << "Hello" << endl; };
    f();

    [](int x, int y) { cout << "sum is " << x + y << endl; }(10, 30);

    int a = 10;
    int b = 20;

    [&a, &b]() { cout << ++a << " " << ++b << endl; }();
    //[a] is takes values of a when the lambda expression initialize
    //[&a ,& b] reaches current values a and b 
    // [ & ] reaches everthing in scope

}