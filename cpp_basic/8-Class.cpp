#include <iostream>

//basic class

class Rectangle1
{

public:
    int length;
    int breadth;

    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
class Rectangle2
{
private:
    int length;
    int breadth;

public:
    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};

class Rectangle3
{
private:
    int length;
    int breadth;

public:
    Rectangle3() // non-parameterized constructor
    {
        length = 0;
        breadth = 0;
    }

    Rectangle3(int a, int b) // parameterized constructor
    // can be use with default parameter as  Rectangle3(int a=0, int b=0)
    // Rectangle3(5,10) // Rectangle3(5) // Rectangle3() // all of three will construct with this so if using default parameter no need to non-parameterized constructor
    {
        length = 0;
        breadth = 0;
    }

    Rectangle3(Rectangle3 &rect) // copy constructor
    {
        length = rect.length;
        breadth = rect.breadth;
    }

    void setlength(int l)
    {
        length = l;
    }
    void setbreadth(int b)
    {
        breadth = b;
    }
    int getlength()
    {
        return length;
    }
    int getbreadth()
    {
        return breadth;
    }
    int area()
    {
        return length * breadth;
    }
    int perimeter()
    {
        return 2 * (length + breadth);
    }
};
int main()
{
    // Rectangle1 r1; // created in stack
    // r1.breadth = 5; // valid if variable public
    // r1.length = 8; // valid if variable public
    // int a = r1.area();

    // Rectangle1 *p = new Rectangle1(); //created in heap
    // p->breadth = 6; // valid if variable public
    // p->length = 7; // valid if variable public
    // int b = p->area();

    // Rectangle2 r1;
    // r1.setlength(10);
    // r1.setbreadth(5);
    // std::cout << r1.area() << std::endl;
    // std::cout << r1.perimeter() << std::endl;
    // std::cout << r1.getlength() << std::endl;

    // Rectangle3 non_parameterizedRectangle();
    // Rectangle3 parameterizedRectangle(5, 10);
    // Rectangle3 copiedRectangle3(parameterizedRectangle);

    // return 0;
}
