#include <iostream>

// Publicly - All members of base will have same accessibility in derived class
// Protectedly - All members of base will become protected in derived class
// Privately - All members of base will become private in derived class

class Parent
{
private:
    int a;

protected:
    int b;

public:
    int c;

    void funParent()
    {
        a = 10;
        b = 5;
        c = 15;
    }
};

class Child : private Parent // Parent class inherited privately, all members will behave as private 
{
private:
protected:
public:
    void funChild()
    {
        //a=10; // can not be accesible private member of Parent
        b = 5;
        c = 15;
    }
}; 

class GrandChild : public Child
{
public:
    void funGrandChild()
    {
        //a=10;  // can not be accesible private member of Parent
        //b=5;   //  protected in Parent but can not be accesible because Parent inherited privately to child
        //c=20;  //  public in Parent but can not be accesible because Parent inherited privately to child
    }
};
int main()
{
    // Child c;
    //c.a=10;
    //c.b=5;
    //c.c=20;
}