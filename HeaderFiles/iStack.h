#pragma once
#include "LinkedList.h"
class Istack
{
public:
    Istack();
    virtual ~Istack();
    virtual bool isEmpty() = 0;
    virtual bool push(int data) = 0;
    virtual bool pop(int &data) = 0;
    virtual bool top(int &data) = 0;
    virtual void traverse() = 0;
};

class LinkedListStack : public Istack
{
private:
    LinkedList list;

public:
    LinkedListStack();

    virtual ~LinkedListStack();
    bool isEmpty();
    bool push(int data);
    bool pop(int &data);
    bool top(int &data);
    void traverse();
};


class ArrayStack : public Istack 
    {
        private :
            int *data;
            int topindex;
            int size;
        
        public:
            ArrayStack(int size);
            bool isFull();
            virtual bool isEmpty() = 0;
            virtual bool push (const int element );
            virtual bool pop (int &element);
            virtual bool top(int &element) const;
            void traverse();
    };
