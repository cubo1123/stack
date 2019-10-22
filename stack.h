#ifndef STACK_H
#define STACK_H
#include<node.h>

class Stack
{
public:
    Stack();
    bool isEmpty();
    bool push(string data,int id);
    bool pop();
    Node* getTop();
    void showAll();
private:
    Node* top;
    Node* first;


};

#endif // STACK_H
