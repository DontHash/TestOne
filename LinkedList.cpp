#inlcude"LinkedList.h"

LinkedeList() : HEAD(nullptr),TAIL(nullptr) {}

bool LinkedList::isEmpty()
{
    if(HEAD==nullptr && TAIL == nullptr)
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
         Node newNode;
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
         Node newNode;
        newNode->data= data;
        newNode->next= nullptr;
        TAIL->next = &newNode;
        TAIL = newNode;
    }
    else
        newNode->data = data;
        newNode->next = nullptr;
        TAIL = newNode;

}