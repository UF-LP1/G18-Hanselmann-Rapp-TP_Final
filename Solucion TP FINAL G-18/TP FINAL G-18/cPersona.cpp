#include "cPersona.h"

cPersona::cPersona(string Nombre_, string Apellido_, string Telefono_)
{
    this->Nombre = Nombre_;
    this->Apellido = Apellido_;
    this->Telefono = Telefono_;
}

cPersona::~cPersona()
{

}

string cPersona::get_Nombre()
{
    return this->Nombre;
}

string cPersona::get_Apellido()
{
    return this->Apellido;
}

string cPersona::get_Telefono()
{
    return this->Telefono;
}

void cPersona::set_Nombre(string NuevoEstado)
{
    this->Nombre = NuevoEstado;
}

void cPersona::set_Apellido(string NuevoEstado)
{
    this->Apellido = NuevoEstado;
}

void cPersona::set_Telefono(string NuevoEstado)
{
    this->Telefono = NuevoEstado;
}
