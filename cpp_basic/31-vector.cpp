#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<int> v = {2, 4, 6, 8, 10};

    v.push_back(20); // 20 added to v after 10
    v.push_back(30); // 30 added to v after 20
    v.pop_back();// deleted 30
//////////////////////////////////////////////////////////////
    vector<int>::iterator itr;
    cout << "using iterator" << endl;

    for (itr = v.begin(); itr != v.end(); itr++)
        cout << ++*itr << endl; // ++*itr will read and increase
                                // 3 5 7 9 11 21  
///////////////////////////////////////////////////////////////
    cout << "using for each loop" << endl;

    for (int x : v)
        cout << x << endl; // 3 5 7 9 11 21  
}