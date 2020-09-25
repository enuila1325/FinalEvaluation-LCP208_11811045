#include <string>

#ifndef EQUIPO_H
#define EQUIPO_H

using namespace std;

class Equipo
{
private:
    string nombre;
    int ganados, empatados, perdidos, golesFavor, golesContra, difGoles, PTS;

public:
    Equipo();
    Equipo(string, int, int, int, int, int);
    string get_nombre();
    int get_ganados();
    int get_perdidos();
    int get_empatados();
    int get_golesFavor();
    int get_golesContra();
    int get_difGoles();
    int get_PTS();
    int get_partidos();
    int get_DG();
    void set_nombre(string);
    void set_ganados(int);
    void set_perdidos(int);
    void set_empatados(int);
    void set_golesFavor(int);
    void set_golesContra(int);
    void set_PTS(int);
};

#endif