#include "cOrtopedias.h"


cOrtopedias::cOrtopedias(string Nombre_, string Direccion_, list<cPiezasOrtopedicas> Protesis_, unsigned int CantidadPiezas_) :cAsociacion(Nombre_, Direccion_)
{
	this->Protesis = Protesis;
	this->CantidadPiezas = CantidadPiezas_;
}

cOrtopedias::~cOrtopedias()
{

}

list <cPiezasOrtopedicas> cOrtopedias::get_Protesis()
{
	return this->Protesis;
}

unsigned int cOrtopedias::get_CantidadPiezas()
{
	return this->CantidadPiezas;
}

void cOrtopedias::set_Protesis(list <cPiezasOrtopedicas> NuevoEstado)
{
	this->Protesis = NuevoEstado;
}

void cOrtopedias::set_CantidadPiezas(unsigned int NuevoEstado)
{
	this->CantidadPiezas = NuevoEstado;
}

void cOrtopedias:: Imprimir_Protesis()
{

}