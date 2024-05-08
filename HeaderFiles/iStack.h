#pragma once
#include "LinkedList.h"
class Istack
{
public:
    Istack();
    ~Istack();
    virtual bool isEmpty() = 0;
    virtual void push(int data) = 0;
    virtual void pop(int &data) = 0;
    virtual void top(int &data) = 0;
};

class LinkedListStack : public Istack
{
private:
    LinkedList list;

public:
    LinkedListStack();

    ~LinkedListStack();
    bool isEmpty();
    void push(int data);
    void pop(int &data);
    void top(int &data);
};
