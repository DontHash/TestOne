#include "iStack.h"

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