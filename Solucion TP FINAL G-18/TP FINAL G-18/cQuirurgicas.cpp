#include "cQuirurgicas.h"

cQuirurgicas::cQuirurgicas(int Dimensiones_, TipoMaterial Material_, tm Fabricacion_, cFabricantes* Fabricante_, TipoProtesis Protesis_, string numero_serie_) :cPiezasOrtopedicas(Dimensiones_, Material_, Fabricacion_, Fabricante_, Protesis_, numero_serie_)
{

}

cQuirurgicas::~cQuirurgicas()
{

}

TipoProtesis cQuirurgicas::get_Protesis()
{
	return this->Protesis;
}

void cQuirurgicas::set_Protesis(TipoProtesis NuevoEstado)
{
	this->Protesis = NuevoEstado;
}