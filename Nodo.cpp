#include "Nodo.h"

template <typename T>

Nodo<T>::Nodo()
{
    data = NULL;
    next = NULL;
}

template <typename T>
Nodo<T>::Nodo(T _data)
{
    data = _data;
    next = NULL;
}

// // Eliminar todos los Nodos
// template <typename T>
// void Nodo<T>::delete_all()
// {
//     if (next)
//         next->delete_all();
//     delete this;
// }

// // Imprimir un Nodo
// template <typename T>
// void Nodo<T>::print()
// {
//     //cout << "Node-> " << "Dato: " << dato << " Direcion: " << this << " Siguiente: " << next << endl;
//     cout << data << "-> ";
// }

// template <typename T>
// Node<T>::~Node() {}