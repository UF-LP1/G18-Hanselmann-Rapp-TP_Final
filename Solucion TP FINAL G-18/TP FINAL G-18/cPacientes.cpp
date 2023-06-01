#include "cPacientes.h"

cPacientes::cPacientes(string Nombre_, string Apellido_, string Telefono_, time_t Nacimiento_, TipoAlergia Alergias_, cHospitales& Atendido_, unsigned int RadioMiembro_, bool CompatibleQuirurgica_, bool TieneProtesis_) :cPersona(Nombre_, Apellido_, Telefono_)
{
	this->Nacimiento = Nacimiento_;
	this->Alergias = Alergias_;
	this->Atendido = Atendido_;
	this->RadioMiembro = RadioMiembro_;
	this->CompatibleQuirurgica = CompatibleQuirurgica_;
	this->TieneProtesis = TieneProtesis_;
}

cPacientes::~cPacientes()
{

}

time_t cPacientes::get_Nacimiento()
{
	return this->Nacimiento;
}

TipoAlergia cPacientes::get_Alergias()
{
	return this->Alergias;
}

cHospitales cPacientes::get_Atendido()
{
	return this->Atendido;
}

unsigned int cPacientes::get_RadioMiembro()
{
	return this->RadioMiembro;
}

bool cPacientes::get_CompatibleQuirurgica()
{
	return this->CompatibleQuirurgica;
}

bool cPacientes::get_TieneProtesis()
{
	return this->TieneProtesis;
}

void cPacientes::set_Nacimiento(time_t NuevoEstado)
{
	this->Nacimiento = NuevoEstado;
}

void cPacientes::set_Alergias(TipoAlergia NuevoEstado)
{
	this->Alergias = NuevoEstado;
}

void cPacientes::set_RadioMiembro(unsigned int NuevoEstado)
{
	this->RadioMiembro = NuevoEstado;
}

void cPacientes::set_CompatibleQuirurgica(bool NuevoEstado)
{
	this->CompatibleQuirurgica = NuevoEstado;
}

void cPacientes::set_TieneProtesis(bool NuevoEstado)
{
	this->TieneProtesis = NuevoEstado;
}
