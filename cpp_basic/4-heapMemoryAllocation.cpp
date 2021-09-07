#include <iostream>

// variables in stack deleted automatically
//variables ins heaps should deleted manually
int main()
{
    int A[3] = {1, 2, 3}; // in stack

    int *p; // heap

    p = new int[3]; // heap

    int size;
    int A[size];

    // p = nullptr;  never assign null to pointer before delete memory, otherwise memory erasing is impossible and useless
    delete[] p; // memory will be free
    p = nullptr;

    //change array size 
    int *p1 = new int[4];

    delete[] p;
    p1 = new int[8];

    return 0;
}