#include "Equipo.h"

Equipo::Equipo()
{
}
Equipo::Equipo(int _ganados, int _empatados, int _perdidos, int _aFavor, int _enContra)
{
    this->ganados = _ganados;
    this->empatados = _empatados;
    this->perdidos = _perdidos;
    this->golesFavor = _aFavor;
    this->golesContra = _enContra;
    this->difGoles = golesFavor - golesContra;
    this->PTS = (ganados * 3) + (empatados);
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