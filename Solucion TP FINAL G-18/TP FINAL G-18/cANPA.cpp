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
	return false;
}

