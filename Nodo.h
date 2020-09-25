#ifndef NODO_H
#define NODO_H

#include "Equipo.h"
#include <iostream>

using namespace std;

class Nodo
{
private:
    Nodo *next;
    Equipo *equipo;

public:
    Nodo();
    Nodo(Equipo *);
    Nodo *nextNode(Nodo *);
    Nodo *next_node();
    Equipo *getEquipo();
    void setEquipo(Equipo *);
};
#endif