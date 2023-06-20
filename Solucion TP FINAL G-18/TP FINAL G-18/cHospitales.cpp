#include "cHospitales.h"

cHospitales::cHospitales(string Nombre_, string Direccion_, list<cMedicos*> Medicos_, list<cPacientes*> Pacientes_) :cAsociacion(Nombre_, Direccion_)
{
	this->Medicos = Medicos_;
	this->Pacientes = Pacientes_;
}

cHospitales::~cHospitales()
{

}

list <cMedicos*> cHospitales::get_Medicos()
{
	return this->Medicos;
}

list <cPacientes*> cHospitales::get_Pacientes()
{
	return this->Pacientes;
}

void cHospitales::set_Medicos(list <cMedicos*> NuevoEstado)
{
	this->Medicos = NuevoEstado;
}

void cHospitales::set_Pacientes(list <cPacientes*> NuevoEstado)
{
	this->Pacientes = NuevoEstado;
}

void cHospitales::Imprimir_ListaPacientes()
{
	list <cPacientes*> Pacie = get_Pacientes();
	list <cPacientes*>::iterator itpaci;

	for (itpaci = Pacie.begin(); itpaci != Pacie.end(); itpaci++)
	{
		cout << "\tCaracteristicas de las Piezas: " << (*itpaci)->to_string_Pacientes() << endl;
	}
	return;
}

void cHospitales::AgregarPa(cPacientes* pac)
{
	this->Pacientes.push_back(pac);
}

bool cHospitales::Solicitar_Protesis(cOrtopedias* ortop, cFabricantes* fab)
{
	//devuelve la protesis
	if (ortop->get_CantidadPiezas() == 0)
	{
		if (fab->get_SolicitudRequisitos() == true)
		{
			return true; // si el fabricante desea tener en cuenta los requisitos del medico se puede solicitar correctamente la protesis.
		}
		return false; // rechaza la solicitud del medico para hacer la protesis.
	}
	return true;
}