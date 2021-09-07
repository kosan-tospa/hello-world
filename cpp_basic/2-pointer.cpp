#include <iostream>

using namespace std;

int main()
{
    int x = 10;

    int *p; //declaration

    p = &x; // initialization

    cout << *p; //dereferencing // prints x's value

    return 0;
}