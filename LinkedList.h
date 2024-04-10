#define NULL 0

class Node
{
    public:
        int data;
        Node *next;

        Node(){}
        Node(int d): data(d),next(NULL) {}
        Node(int d,Node*next): data(d),next(next) {}
};