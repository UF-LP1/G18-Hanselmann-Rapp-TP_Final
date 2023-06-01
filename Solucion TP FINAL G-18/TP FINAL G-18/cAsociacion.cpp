#include "cAsociacion.h"

cAsociacion::cAsociacion(string Nombre_, string Direccion_)
{
    this->Nombre = Nombre_;
    this->Direccion = Direccion_;
}

cAsociacion::~cAsociacion()
{

}

string cAsociacion::get_Nombre()
{
    return this->Nombre;
}

string cAsociacion::get_Direccion()
{
    return this->Direccion;
}

void cAsociacion::set_Nombre(string NuevoEstado)
{
    this->Nombre = NuevoEstado;
}

void cAsociacion::set_Direccion(string NuevoEstado)
{
    this->Direccion = NuevoEstado;
}
