#include "cNoQuirurgicas.h"

cNoQuirurgicas::cNoQuirurgicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_, cFabricantes Fabricante_, static unsigned int stock_, unsigned int Radio_Protesis_, TipoProtesis Protesis_No_Q_):cPiezasOrtopedicas(Dimensiones_, Material_, Fabricacion_, Fabricante_, stock_)

{
	this->Radio_Protesis = Radio_Protesis_;
	this->Protesis_No_Q = Protesis_No_Q_;

}

cNoQuirurgicas::~cNoQuirurgicas()
{

}

unsigned int cNoQuirurgicas::get_Radio_Protesis()
{
	return this->Radio_Protesis;
}

TipoProtesis cNoQuirurgicas::get_Protesis_No_Q()
{
	return this->Protesis_No_Q;
}


void cNoQuirurgicas::set_Radio_Protesis(unsigned int NuevoEstado)
{
	this->Radio_Protesis = NuevoEstado;
}

void cNoQuirurgicas::set_Protesis_No_Q(TipoProtesis NuevoEstado)
{
	this->Protesis_No_Q = NuevoEstado;
}