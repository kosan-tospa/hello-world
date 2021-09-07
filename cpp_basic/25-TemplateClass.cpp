#include <iostream>
using namespace std;

template <class t>
class Stack
{
private:
    t *stk;
    int top;
    int size;

public:
    Stack(int sz)
    {
        size = sz;
        top = -1;
        stk = new int[size];
    }
    void push(t x);
    t pop();
};

template <class t>
void Stack<t>::push(t x)
{
    if (top == size - 1)
        cout << "Stack is full";
    else
    {
        top++;
        stk[top] = x;
    }
}

template <class t>
t Stack<t>::pop()
{
    t x = 0;
    if (top == -1)
        cout << "Stack is empty" << endl;
    else
    {
        x = stk[top];
        top--;
    }
    return x;
}

int main()
{
    Stack<int> s(10); //integer stack class
    s.push(10);
    s.push(23);
    s.push(33);

    Stack<float>sF(10); //float stack class
    sF.push(1.2);
    sF.push(3.3);
    
}

