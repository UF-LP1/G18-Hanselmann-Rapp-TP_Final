#include "cANPA.h"

cANPA::cANPA(list <cRegistros> Registro_, string SolicitudEspecial_, list <cOrtopedias> Ortopedia_)
{
	this->Registro = Registro_;
	this->SolicitudEspecial = SolicitudEspecial_;
	this->Ortopedia = Ortopedia_;
}

cANPA::~cANPA()
{

}

list<cRegistros> cANPA::get_Registro()
{
	return this->Registro;
}

string cANPA::get_SolicitudEspecial()
{
	return this->SolicitudEspecial;
}

list<cOrtopedias> cANPA::get_Ortopedia()
{
	return this->Ortopedia;
}

void cANPA::set_Registro(list<cRegistros> NuevoEstado)
{
	this->Registro = NuevoEstado;
}

void cANPA::set_SolicitudEspecial(string NuevoEstado)
{
	this->SolicitudEspecial = NuevoEstado;
}

void cANPA::set_Ortopedia(list<cOrtopedias> NuevoEstado)
{
	this->Ortopedia = NuevoEstado;
}

list<cPacientes> cANPA::Buscar_Paciente(cHospitales hospi, cPiezasOrtopedicas piezita)
{
	list <cPacientes> ::iterator itpaciente;
	list <cPacientes> pac1 = hospi.get_Pacientes();
	list <cPacientes> prote;

	unsigned int cont_pro = 0;
	itpaciente = pac1.begin();

	for (int i = 0; i < pac1.size(); i++, itpaciente++)
	{
		if (itpaciente->get_TieneProtesis() == true)
		{
			prote.push_back(*itpaciente);
			cont_pro++;
		}
	}

	return prote;
}

bool cANPA::Buscar_Protesis(cPacientes, cPiezasOrtopedicas)
{
	return false;
}
