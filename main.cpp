#include <iostream>
#include <fstream>
#include <cstring>
#include <vector>
#include <sstream>
#include <iomanip>

#include "Equipo.cpp"
#include "Nodo.cpp"

using namespace std;

int main(int argc, char *argv[])
{
    string ruta = argv[1];
    fstream archivoTxt(ruta.c_str(), ios::in | ios::out);
    vector<string> lineas;

    while (!archivoTxt.eof())
    {
        string texto;
        getline(archivoTxt, texto);
        stringstream streamDeTexto(texto);
        string linea;
        while (getline(streamDeTexto, linea, '\n'))
        {
            lineas.push_back(linea);
        }
    }

    Nodo *tope = nullptr;

    for (int i = 0; i < lineas.size(); i++)
    {
        vector<string> equipo;
        stringstream streamDeLinea(lineas.at(i));
        string atributos;
        while (getline(streamDeLinea, atributos, ','))
        {
            equipo.push_back(atributos);
        }
        Equipo *temp = new Equipo(equipo[0], stoi(equipo[1]), stoi(equipo[2]), stoi(equipo[3]), stoi(equipo[4]), stoi(equipo[5]));
        // equipos.push_back(temp);
        Nodo *nuevoNodo = new Nodo(temp);
        nuevoNodo->nextNode(tope);
        tope = nuevoNodo;
    }

    Nodo *temp = tope;

    while (temp)
    {
        Nodo *minimo = temp;
        Nodo *auxiliar = temp->next_node();

        while (auxiliar)
        {
            if (minimo->getEquipo()->get_PTS() < auxiliar->getEquipo()->get_PTS())
            {
                minimo = auxiliar;
            }
            auxiliar = auxiliar->next_node();
        }
        Equipo *_equipoAuxiliar = temp->getEquipo();
        temp->setEquipo(minimo->getEquipo());
        minimo->setEquipo(_equipoAuxiliar);
        temp = temp->next_node();
    }
    int posicion = 1;
    cout << "              PJ  G  E  P  GA  GC  DG  PTS" << endl;
    while (tope != NULL)
    {
        cout << posicion << setw(12) << tope->getEquipo()->get_nombre() << setw(3) << tope->getEquipo()->get_partidos() << setw(3) << tope->getEquipo()->get_ganados() << setw(3)
             << tope->getEquipo()->get_perdidos() << setw(3) << tope->getEquipo()->get_empatados() << setw(4) << tope->getEquipo()->get_golesFavor() << setw(4) << tope->getEquipo()->get_golesContra() << setw(4) << tope->getEquipo()->get_DG() << setw(5) << tope->getEquipo()->get_PTS() << endl;
        posicion++;
        tope = tope->next_node();
    }
}