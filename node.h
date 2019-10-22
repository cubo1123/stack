#ifndef NODE_H
#define NODE_H
#include<iostream>
using namespace std;

class Node
{
public:
    Node();
    Node(string data,int id);

    Node *getPrev() const;
    void setPrev(Node *value);

    string getData() const;
    void setData(const string &value);

    int getId() const;
    void setId(int value);

private:
    Node* prev;
    string data;
    int id;
};

#endif
