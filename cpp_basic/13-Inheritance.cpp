#include <iostream>

// class Rectangle
// {
// private:
//     int length;
//     int breadth;

// public:
//     void setlength(int l)
//     {
//         length = l;
//     }
//     void setbreadth(int b)
//     {
//         breadth = b;
//     }
//     int getlength()
//     {
//         return length;
//     }
//     int getbreadth()
//     {
//         return breadth;
//     }
//     int area()
//     {
//         return length * breadth;
//     }
//     int perimeter()
//     {
//         return 2 * (length + breadth);
//     }
// };

// class Cuboid : public Rectangle
// {
// private:
//     int height;

// public:
//     Cuboid(int l = 0, int b = 0, int h = 0)
//     {
//         height = h;
//         setlength(l);
//         setbreadth(b);
//     }

//     int getheigth()
//     {
//         return height;
//     }

//     void setheight(int h)
//     {
//         height = h;
//     }

//     int volume()
//     {
//         return getlength() * getbreadth() * getheigth();
//     }
// };

// int main()
// {
//     Cuboid cub(10, 5, 3);
//     std::cout << cub.volume();
//     std::cout << cub.area();

//     return 0;
// }



class base
{
public:
	int a;
     	void display()
	{
	 	std::cout<<"display of base"<<a<<std::endl;
	}
};
class derived:public base
{
public:
      	void show()
	{
	   	std::cout<<"show of derived"<<a<<std::endl;
	}
};
int main()
{
    base b;
    b.a = 5;
    b.display(); // will print 5


	derived d;
	d.a=100;
	d.display(); // will print 100
	d.show(); // will print 100

    return 0;
}