#include "Nodo.h"
#include "Equipo.h"

Nodo::Nodo()
{
}

Nodo::Nodo(Equipo *_data)
{
    equipo = _data;
}

Nodo *Nodo::nextNode(Nodo *nuevoTope)
{
    this->next = nuevoTope;
    return next;
}
Nodo *Nodo::next_node()
{
    return next;
}

Equipo *Nodo::getEquipo()
{
    return equipo;
}

void Nodo::setEquipo(Equipo *newEquipo)
{
    this->equipo = newEquipo;
}