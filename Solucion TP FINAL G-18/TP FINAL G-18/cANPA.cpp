#include "cANPA.h"

cANPA::cANPA(cHospitales* Hospital_, cMedicos* Medico_, tm FechaSolicitud_, tm FechaEstimativaEntrega_, tm FechaEntregada_, cPiezasOrtopedicas* Protesis_,
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

cHospitales* cANPA::get_NombreHospital()
{
	return this->NombreHospital;
}

string cANPA::get_NombreMedico()
{
	return this->NombreMedico->get_Nombre();
}

tm cANPA::get_FechaSolicitud()
{
	return this->FechaSolicitud;
}

tm cANPA::get_FechaEstimativaEntrega()
{
	return this->FechaEstimativaEntrega;
}

tm cANPA::get_FechaEntregada()
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

void cANPA::set_FechaSolicitud(tm NuevoEstado)
{
	this->FechaSolicitud = NuevoEstado;
}

void cANPA::set_FechaEstimativaEntrega(tm NuevoEstado)
{
	this->FechaEstimativaEntrega = NuevoEstado;
}

void cANPA::set_FechaEntregada(tm NuevoEstado)
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

list<cPacientes> cANPA::Buscar_Paciente(cHospitales hospi, cPiezasOrtopedicas)
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

bool cANPA::Diferencia_Entrega(tm solicitud, tm entregada)
{
	FechaEstimativaEntrega = {0, 0, 23, 27, 5, 123};
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

}

