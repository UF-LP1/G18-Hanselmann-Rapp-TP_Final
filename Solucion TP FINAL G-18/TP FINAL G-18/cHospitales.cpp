#include "cHospitales.h"

cHospitales::cHospitales(string Nombre_, string Direccion_, std::list<cMedicos> Medicos_, std::list<cPacientes> Pacientes_) :cAsociacion(Nombre_, Direccion_)
{
	this->Medicos = Medicos_;
	this->Pacientes = Pacientes_;
}

cHospitales::~cHospitales()
{

}

std::list <cMedicos> cHospitales::get_Medicos()
{
	return this->Medicos;
}

std::list <cPacientes> cHospitales::get_Pacientes()
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

bool cHospitales::Agregar_Paciente(cPacientes pac)
{
	list <cPacientes>::iterator itPaciente;
	list<cPacientes> pacientito = get_Pacientes();
	itPaciente = pacientito.begin();

	for (int i = 0; i < pacientito.size(); i++, itPaciente++)
	{
		if (itPaciente->get_RadioMiembro() > 0)
		{
			this->Pacientes.push_back(pac);
			Pacientes.unique();

			return true;
		}
		else
		{
			return false;
		}
	}
}

bool cHospitales::Solicitar_Protesis(cOrtopedias ortop, cFabricantes fab)
{
	return false;
}

void cHospitales::Imprimir_Pacientes()
{
	return;
}
