#include "iStack.h"
#include "LinkedList.h"
#include <iostream>

LinkedListStack::LinkedListStack(){}
LinkedListStack::~LinkedListStack(){}

bool LinkedListStack::isEmpty()
{
    if(list.isEmpty())
    {
        
        return true;
    }
    else
    return false;
}

bool LinkedListStack::push(int data)
{
    if(!isEmpty())
    {
        list.addToHead(data);
    }
}

bool LinkedListStack::pop(int &data)
{
    if(!isEmpty())
    {
        list.removeFromHead(data);
    }
    else
    std::cout<<"The Stack is empty \n";
}

bool LinkedListStack::top(int &data)
{
    if(!isEmpty())
    {
        data = list.HeadReturn(data);
    }
}

int main()
{
    LinkedListStack Stack;
    int data;
    if(Stack.isEmpty())
    {
        std::cout<<"The stack is Empty \n";
    }
    Stack.push(5);
    Stack.push(6);
    Stack.pop(data);
    std::cout<<"The removed data is "<<data<<std::endl;
    Stack.top(data);
    std::cout<<"The data  at the top is "<<data;
}