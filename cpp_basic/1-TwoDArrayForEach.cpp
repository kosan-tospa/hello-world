#include <iostream>

int main()
{
    int A[3][2] = {{1, 2}, {3, 4}, {5, 6}};

    for (auto &x : A) //x should be reference
    {
        for (int y : x)
        {
            std::cout << y << " ";
        }

        std::cout << std::endl;
    }

    return 0;
}
