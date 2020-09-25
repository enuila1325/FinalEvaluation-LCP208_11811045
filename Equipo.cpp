#include "Equipo.h"

Equipo::Equipo()
{
}
Equipo::Equipo(string _nombre, int _ganados, int _empatados, int _perdidos, int _aFavor, int _enContra)
{
    this->nombre = _nombre;
    this->ganados = _ganados;
    this->empatados = _empatados;
    this->perdidos = _perdidos;
    this->golesFavor = _aFavor;
    this->golesContra = _enContra;
    this->difGoles = golesFavor - golesContra;
    this->PTS = (ganados * 3) + (empatados);
}

string Equipo::get_nombre()
{
    return this->nombre;
}
int Equipo::get_ganados()
{
    return this->ganados;
}
int Equipo::get_perdidos()
{
    return this->perdidos;
}
int Equipo::get_empatados()
{
    return this->empatados;
}
int Equipo::get_golesFavor()
{
    return this->golesFavor;
}
int Equipo::get_golesContra()
{
    return this->golesContra;
}
int Equipo::get_difGoles()
{
    return this->difGoles;
}
int Equipo::get_PTS()
{
    return this->PTS;
}
int Equipo::get_partidos()
{
    return ganados + perdidos + empatados;
}
int Equipo::get_DG()
{
    return difGoles;
}
void Equipo::set_nombre(string _newNombre)
{
    this->nombre = _newNombre;
}
void Equipo::set_ganados(int _newGanados)
{
    this->ganados = _newGanados;
}
void Equipo::set_perdidos(int _newPerdidos)
{
    this->perdidos = _newPerdidos;
}
void Equipo::set_empatados(int _newEmpatados)
{
    this->empatados = _newEmpatados;
}
void Equipo::set_golesFavor(int _newAFavor)
{
    this->golesFavor = _newAFavor;
}
void Equipo::set_golesContra(int _newContra)
{
    this->golesContra = _newContra;
}
void Equipo::set_PTS(int _newPuntos)
{
    this->PTS = _newPuntos;
}