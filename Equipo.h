#ifndef EQUIPO_H
#define EQUIPO_H

class Equipo
{
private:
    int ganados, empatados, perdidos, golesFavor, golesContra, difGoles, PTS;

public:
    Equipo();
    Equipo(int, int, int, int, int);
    int get_ganados();
    int get_perdidos();
    int get_empatados();
    int get_golesFavor();
    int get_golesContra();
    int get_difGoles();
    int get_PTS();
};

#endif