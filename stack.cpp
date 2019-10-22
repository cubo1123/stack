#include "stack.h"

Stack::Stack()
{
    top = nullptr;
    first = nullptr;
}

bool Stack::isEmpty(){
    return first == nullptr;
}

bool Stack::push(string data,int id){
    Node* n = new Node(data,id);
    if(first == nullptr){
        first = n;
        top = n;
        return true;
    }
    n->setPrev(top);
    top = n;
    return true;
}

bool Stack::pop(){
    if(top == nullptr){
        return false;
    }
    top = top->getPrev();
    return true;
}

Node *Stack::getTop()
{
    return top;
}

void Stack::showAll()
{
    Node* temp = top;
    while (temp) {
        cout<<temp->getData()<<endl;
        temp = temp->getPrev();
    }
}

