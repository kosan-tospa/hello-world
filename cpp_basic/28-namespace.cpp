#include <iostream>

namespace first
{
    void fun()
    {
        std::cout << "first" << std::endl;
    }
}; // namespace first

namespace second
{
    void fun()
    {
        std::cout << "second" << std::endl;
    }
}; // namespace second

using namespace first;
int main()
{
    fun(); // print first
    second::fun(); // print second

}