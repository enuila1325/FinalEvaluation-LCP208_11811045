#ifndef NODO_H
#define NODO_H

#include <iostream>

using namespace std;

template <class T>

class Node
{
public:
    Nodo();
    Nodo(T);
    ~Nodo();

    Node *next;
    T data;

};
#endif