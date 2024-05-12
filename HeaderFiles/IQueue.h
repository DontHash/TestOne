
#include <iostream>
#include "LinkedList.h"
#pragma once
class IQueue
{
public:
    IQueue() {}
    ~IQueue() {}
    virtual void enQueue(int data) = 0;
    virtual void deQueue(int &data) = 0;
    virtual void isEmpty() = 0;
    virtual void isFull() = 0;
    virtual void front(int &data) = 0;
    virtual void rear(int &data) = 0;
};

class LinkedListQueue : public IQueue
{
private:
    LinkedList list;

public:
    LinkedListQueue() {}
    ~LinkedListQueue() {}
    void enQueue(int data);
    void deQueue(int &data);
    void front(int &data);
    void rear(int &data);
    void isEmpty();
    void traverse();
};

class Queue : public IQueue
{
private:
    int size;
    int topindex;
    int *data;

public:
    Queue(int x) : size(x), topindex(-1), data(new int[size]) {}

    void enQueue(int data);
    void deQueue(int &data);
    void isEmpty();
    void isFull();
    void front(int &data);
    void rear(int &data);
};