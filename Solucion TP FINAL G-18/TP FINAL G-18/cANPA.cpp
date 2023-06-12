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


bool cANPA::Buscar_Protesis(cPacientes, cPiezasOrtopedicas)
{
	return false;
}

ostream& operator<<(ostream& out, cANPA& anpa)
{
	//out << anpa.get_Ortopedia();
	//out << anpa.get_Registro();
	out << anpa.get_SolicitudEspecial();

	return out;
}