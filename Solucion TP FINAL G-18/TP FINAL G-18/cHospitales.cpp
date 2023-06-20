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

void cHospitales::Imprimir_Pacientes()
{
	return;
}

bool cHospitales::Solicitar_Protesis(cOrtopedias ortop, cFabricantes fab)
{
	//devuelve la protesis

	if (ortop.get_CantidadPiezas() == 0)
	{
		if (fab.get_SolicitudRequisitos() == true)
		{
			ortop.Imprimir_Protesis();
			return true; // si el fabricante desea tener en cuenta los requisitos del medico se puede solicitar correctamente la protesis.
		}
		return false; // rechaza la solicitud del medico para hacer la protesis.
	}
	return true;
	ortop.Imprimir_Protesis();
}