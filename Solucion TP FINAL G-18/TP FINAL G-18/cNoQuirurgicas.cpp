#include "cNoQuirurgicas.h"

cNoQuirurgicas::cNoQuirurgicas(int Dimensiones_, TipoMaterial Material_, tm Fabricacion_, cFabricantes* Fabricante_, TipoProtesis Protesis_, string numero_serie_, unsigned int Radio_Protesis_) :cPiezasOrtopedicas(Dimensiones_, Material_, Fabricacion_, Fabricante_, Protesis_, numero_serie_)
{
	this->Radio_Protesis = Radio_Protesis_;
}

cNoQuirurgicas::~cNoQuirurgicas()
{

}

unsigned int cNoQuirurgicas::get_Radio_Protesis()
{
	return this->Radio_Protesis;
}

TipoProtesis cNoQuirurgicas::get_Protesis()
{
	return this->Protesis;
}

void cNoQuirurgicas::set_Radio_Protesis(unsigned int NuevoEstado)
{
	this->Radio_Protesis = NuevoEstado;
}

void cNoQuirurgicas::set_Protesis(TipoProtesis NuevoEstado)
{
	this->Protesis = NuevoEstado;
}