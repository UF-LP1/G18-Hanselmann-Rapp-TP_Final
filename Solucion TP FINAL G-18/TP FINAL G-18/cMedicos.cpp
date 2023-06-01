#include "cMedicos.h"

cMedicos::cMedicos(string Nombre_, string Apellido_, string Telefono_, string Matricula_, bool Autorizacion_): cPersona(Nombre_, Apellido_, Telefono_)
{
	this->Matricula = Matricula_;
	this->Autorizacion = Autorizacion_;
}

cMedicos::~cMedicos()
{

}

string cMedicos::get_Matricula()
{
	return Matricula;
}

bool cMedicos::get_Autorizacion()
{
	return Autorizacion;
}

void cMedicos::set_Matricula(string NuevoEstado)
{
	this->Matricula = NuevoEstado;
}

void cMedicos::set_Autorizacion(bool NuevoEstado)
{
	this->Autorizacion = NuevoEstado;
}
