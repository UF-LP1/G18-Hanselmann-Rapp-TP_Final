#include "cANPA.h"

cANPA::cANPA(cHospitales* Hospital_, cMedicos* Medico_, time_t FechaSolicitud_, time_t FechaEstimativaEntrega_, time_t FechaEntregada_, cPiezasOrtopedicas* Protesis_,
				cPacientes* Paciente_, string SolicitudEspecial_, list<cOrtopedias> Ortopedia_)
{
	this->NombreHospital = Hospital_;
	this->NombreMedico = Medico_;
	this->FechaEntregada = FechaEntregada_;
	this->FechaEstimativaEntrega = FechaEstimativaEntrega_;
	this->FechaSolicitud = FechaSolicitud_;
	this->Protesis = Protesis_;
	this->NombrePaciente = Paciente_;
	this->SolicitudEspecial = SolicitudEspecial_;
	this->Ortopedia = Ortopedia_;
}

cANPA::~cANPA()
{

}

string cANPA::get_NombreHospital()
{
	return this->NombreHospital->get_Nombre();
}

string cANPA::get_NombreMedico()
{
	return this->NombreMedico->get_Nombre();
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

cPiezasOrtopedicas* cANPA::get_Protesis()
{
	return this->Protesis;
}

string cANPA::get_NombrePaciente()
{
	return this->NombrePaciente->get_Nombre();
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
