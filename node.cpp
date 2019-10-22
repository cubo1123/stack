#include "node.h"

Node::Node()
{
    prev = nullptr;
}

Node::Node(string data,int id)
{
    prev = nullptr;
    this->data = data;
    this->id = id;
}

Node *Node::getPrev() const
{
    return prev;
}

void Node::setPrev(Node *value)
{
    prev = value;
}

string Node::getData() const
{
    return data;
}

void Node::setData(const string &value)
{
    data = value;
}

int Node::getId() const
{
    return id;
}

void Node::setId(int value)
{
    id = value;
}
