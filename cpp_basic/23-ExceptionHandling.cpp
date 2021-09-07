#include <iostream>

using namespace std;

// int main()
// {
//     int x = 10, y = 2, z;
//     try
//     {
//         if (y == 0)
//             throw 1;
//         z = x / y;
//         std::cout << z << std::endl;
//     }
//     catch (int e)
//     {
//         std::cout << "division by zero" << e << std::endl; // if y equals to "0"  will print division by zero 1
//     }
//     std::cout << "bye" << std::endl;
// }
//////////////////////////////////////////////////////////////////////////////

// int division(int a, int b)
// {
//     if (b == 0)
//         throw 1;
//     return a / b;
// }

// int main()
// {
//     int x = 10, y = 0, z;

//     try
//     {
//         z = division(x, y);
//         std::cout << z << std::endl;
//     }
//     catch (int e)
//     {
//         std::cout << "division by zero" << std::endl;
//     }
//     std::cout << "bye" << std::endl;
// }
//////////////////////////////////////////////////////////////////////////////

// class myexception : std::exception
// {
// };
// int division(int a, int b)throw(myexception)
// {
// 	if (b == 0)
// 		throw myexception();
// 	return a / b;
// }
// int main()
// {
// 	int x = 10, y = 0, z;
// 	try
// 	{
// 		z = division(x, y);
// 		std::cout << z << std::endl;
// 	}
// 	catch (myexception e)
// 	{
// 		std::cout << "division by zero" << std::endl;
// 	}
// 	std::cout << "bye" << std::endl;
// }

/////////////////////////////////////////////////////////////////////////////////////

// class myexception1 : std::exception
// {
// };
// class myexception2 : public myexception1
// {
// };
// int main()
// {
//     try
//     {
//         throw myexception1();
//     }
//     catch (myexception2 e) // child class must be first
//     {
//         std::cout << "int catch" << std::endl;
//     }
//     catch (myexception1 e)
//     {
//         std::cout << "double catch " << std::endl;
//     }
//     catch (...)
//     {
//         std::cout << "all catch" << std::endl;
//     }
// }

/////////////////////////////////////////////////////////////////////////////////////
