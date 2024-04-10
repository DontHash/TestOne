#inlcude"LinkedList.h"

void LinkedList::add(int data)
{

}

void LinkedList::addToHead(int data)
{
    Node newNode;
    newNode->data= data;
    newNode->next= HEAD;
    HEAD = newNode;

}