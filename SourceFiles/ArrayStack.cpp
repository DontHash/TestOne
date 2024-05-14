#include "iStack.h"
#include <iostream>
ArrayStack::ArrayStack(int size)
    : size(size), topindex(-1), data(new int[size]) {}

bool ArrayStack::isEmpty()
{
    if (topindex < 0)
    {
        return true;
    }
    else
        return false;
}

bool ArrayStack::isFull()
{
    if (topindex >= size - 1)
        return true;
    else
        return false;
}

bool ArrayStack::push(const int element)
{
    if (topindex < size - 1)
    {
        topindex++;
        data[topindex] = element;
        return true;
    }
    else
        return false;
}

bool ArrayStack::top(int &element) const
{
    if (topindex < 0)
    {
        return false;
    }
    else
    {
        element = data[topindex];
        return true;
    }
}

bool ArrayStack::pop(int &element)
{
    if (top(element))
    {
        topindex--;
        return true;
    }
    else
    {

        return false;
    }
}

void ArrayStack::traverse()
{

    if(!isEmpty())
    {
        int i;
    for(i=0;i<=topindex;i++)
    {
        std::cout<<" "<<data[i];
    }
    }
    else
    std::cout<<"The Stack is empty \n";
}