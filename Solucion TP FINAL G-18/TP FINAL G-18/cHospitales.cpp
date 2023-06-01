#include "cHospitales.h"

cHospitales::cHospitales(string Nombre_, string Direccion_, list<cMedicos>Medicos_, list<cPacientes>Pacientes_) :cAsociacion(Nombre_, Direccion_)
{
	this->Medicos = Medicos_;
	this->Pacientes = Pacientes_;
}

cHospitales::~cHospitales()
{

}

list <cMedicos> cHospitales::get_Medicos()
{
	return this->Medicos;
}

list <cPacientes> cHospitales::get_Pacientes()
{
	return this->Pacientes;
}

void cHospitales::set_Medicos(list <cMedicos> NuevoEstado)
{
	this->Medicos = NuevoEstado;
}

void cHospitales::set_Pacientes(list <cPacientes> NuevoEstado)
{
	this->Pacientes = NuevoEstado;
}

bool cHospitales::Agregar_Paciente(cPacientes)
{
	return false;
}

bool cHospitales::Solicitar_Protesis(cOrtopedias, cFabricantes)
{
	return false;
}

void cHospitales::Imprimir_Pacientes()
{
	return;
}
