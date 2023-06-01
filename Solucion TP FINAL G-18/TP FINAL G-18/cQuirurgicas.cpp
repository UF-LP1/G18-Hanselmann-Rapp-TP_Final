#include "cQuirurgicas.h"

cQuirurgicas::cQuirurgicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_, cFabricantes Fabricante_, TipoProtesis Protesis_Q_) :cPiezasOrtopedicas(Dimensiones_, Material_, Fabricacion_, Fabricante_)
{
	this->Protesis_Q = Protesis_Q_;
}

cQuirurgicas::~cQuirurgicas()
{

}

TipoProtesis cQuirurgicas::get_Protesis_Q()
{
	return this->Protesis_Q;
}

void cQuirurgicas::set_Protesis_Q(TipoProtesis NuevoEstado)
{
	this->Protesis_Q = NuevoEstado;
}