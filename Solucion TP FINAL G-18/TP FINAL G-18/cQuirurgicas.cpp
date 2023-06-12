#include "cQuirurgicas.h"

cQuirurgicas::cQuirurgicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_, cFabricantes* Fabricante_, TipoProtesis Protesis_) :cPiezasOrtopedicas(Dimensiones_, Material_, Fabricacion_, Fabricante_, Protesis_)
{
	//this->Protesis_Q = Protesis_Q_;
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