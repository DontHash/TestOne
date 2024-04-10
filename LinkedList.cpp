#include "LinkedList.h"

LinkedList::LinkedeList() : HEAD(nullptr),TAIL(nullptr) {}

bool LinkedList::isEmpty()
{
    if(HEAD->next==nullptr && TAIL->next == nullptr)
    {
        return true;
    }
    else return false;
}

void LinkedList::add(int data)
{

}

void LinkedList::addToHead(int data)
{
    if(!isEmpty())
    {
        Node *newNode;
        newNode->data= data;
        newNode->next= &HEAD;
        HEAD = newNode;
    }
    else
        newNode->data = data;
        newNode->next = nullptr;
        HEAD = newNode;

}

void LinkedList::addToTail(int data)
{
    if(!isEmpty())
    {
         Node *newNode;
        newNode->data= data;
        newNode->next= nullptr;
        TAIL->next = newNode;
        TAIL = newNode;
    }
    else
        newNode->data = data;
        newNode->next = nullptr;
        TAIL = newNode;

}

bool LinkeddList::removeFromHead(int &data)
{
    if(!isEmpty())
    {
        Node *nodeToDelete = HEAD;
        data  = HEAD->data;
        *HEAD = HEAD->next;
        delete nodeToDelete;
        return true;
    }
}

bool LinkeddList::removeFromTail(int &data)
{
    if(!isEmpty())
    {
        Node *nodeToDelete = TAIL;
        Node *p = &Head;
        Node *t = p;
        p = p->next;
        while (p->next != nullptr)
        {
            p = p->next;
            t = t->next;
        }

        

    }
}