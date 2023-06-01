#include "cANPA.h"

cANPA::cANPA(cHospitales Hospital_, cMedicos Medico_, time_t FechaSolicitud_, time_t FechaEstimativaEntrega_, time_t FechaEntregada_, cPiezasOrtopedicas Protesis_, cPacientes Paciente_, string SolicitudEspecial_, list<cOrtopedias> Ortopedia_)
{
	this->Hospital = Hospital_;
	this->Medico = Medico_;
	this->FechaEntregada = FechaEntregada_;
	this->FechaEstimativaEntrega = FechaEstimativaEntrega_;
	this->FechaSolicitud = FechaSolicitud_;
	this->Protesis = Protesis_;
	this->Paciente = Paciente_;
	this->SolicitudEspecial = SolicitudEspecial_;
	this->Ortopedia = Ortopedia_;
}

cANPA::~cANPA()
{

}

cHospitales cANPA::get_Hospital()
{
	return this->Hospital;
}

cMedicos cANPA::get_Medico()
{
	return this->Medico;
}

time_t cANPA::get_FechaSolicitud()
{
	return this->FechaSolicitud;
}

time_t cANPA::get_FechaEstimativaEntrega()
{
	return this->FechaEstimativaEntrega;
}

time_t cANPA::get_FechaEntregada()
{
	return this->FechaEntregada;
}

cPiezasOrtopedicas cANPA::get_Protesis()
{
	return this->Protesis;
}

cPacientes cANPA::get_Paciente()
{
	return this->Paciente;
}

string cANPA::get_SolicitudEspecial()
{
	return this->SolicitudEspecial;
}

list<cOrtopedias> cANPA::get_Ortopedia()
{
	return this->Ortopedia;
}

void cANPA::set_FechaSolicitud(time_t NuevoEstado)
{
	this->FechaSolicitud = NuevoEstado;
}

void cANPA::set_FechaEstimativaEntrega(time_t NuevoEstado)
{
	this->FechaEstimativaEntrega = NuevoEstado;
}

void cANPA::set_FechaEntregada(time_t NuevoEstado)
{
	this->FechaEntregada = NuevoEstado;
}

void cANPA::set_SolicitudEspecial(string NuevoEstado)
{
	this->SolicitudEspecial = NuevoEstado;
}

void cANPA::set_Ortopedia(list<cOrtopedias> NuevoEstado)
{
	this->Ortopedia = NuevoEstado;
}

bool cANPA::Buscar_Paciente(cHospitales, cPiezasOrtopedicas)
{
	return false;
}

bool cANPA::Buscar_Protesis(cPacientes, cPiezasOrtopedicas)
{
	return false;
}
