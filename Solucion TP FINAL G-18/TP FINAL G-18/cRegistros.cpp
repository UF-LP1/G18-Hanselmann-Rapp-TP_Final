#include "cRegistros.h"

cRegistros::cRegistros(cHospitales* Hospital_, cMedicos* Medico_, tm FechaSolicitud_, tm FechaEstimativaEntrega_, tm FechaEntregada_, cPiezasOrtopedicas* Protesis_, cPacientes* Paciente_)
{
	this->NombreHospital = Hospital_;
	this->NombreMedico = Medico_;
	this->FechaSolicitud = FechaSolicitud_;
	this->FechaEstimativaEntrega = FechaEstimativaEntrega_;
	this->FechaEntregada = FechaEntregada_;
	this->Protesis = Protesis_;
	this->NombrePaciente = Paciente_;
}

cRegistros::~cRegistros()
{

}

cHospitales* cRegistros::get_NombreHospital()
{
	return this->NombreHospital;
}

string cRegistros::get_NombreMedico()
{
	return this->NombreMedico->get_Nombre();
}

tm cRegistros::get_FechaSolicitud()
{
	return this->FechaSolicitud;
}

tm cRegistros::get_FechaEstimativaEntrega()
{
	return this->FechaEstimativaEntrega;
}

tm cRegistros::get_FechaEntregada()
{
	return this->FechaEntregada;
}

cPiezasOrtopedicas* cRegistros::get_Protesis()
{
	return this->Protesis;
}

string cRegistros::get_NombrePaciente()
{
	return this->NombrePaciente->get_Nombre();
}

void cRegistros::set_FechaSolicitud(tm NuevoEstado)
{
	this->FechaSolicitud = NuevoEstado;
}

void cRegistros::set_FechaEstimativaEntrega(tm NuevoEstado)
{
	this->FechaEstimativaEntrega = NuevoEstado;
}

void cRegistros::set_FechaEntregada(tm NuevoEstado)
{
	this->FechaEntregada = NuevoEstado;
}

bool cRegistros::Diferencia_Entrega(tm solicitud, tm entregada)
{
	FechaEstimativaEntrega = { 0, 0, 23, 27, 5, 123 };
	time_t soli = mktime(&solicitud);
	time_t estim = mktime(&FechaEstimativaEntrega);
	time_t entre = mktime(&entregada);

	double diferencia = 0.0;

	if (estim != (time_t)(-1) || entre != (time_t)(-1))
	{
		diferencia = difftime(entre, estim) / (86400);
	}
	if (diferencia > 0)
	{
		return false;
	}
	else if (diferencia <= 0)
	{
		return true;
	}
	return false;
}
