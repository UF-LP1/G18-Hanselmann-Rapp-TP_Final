#include "cANPA.h"

cANPA::cANPA(list <cRegistros> Registro_, string SolicitudEspecial_, list <cOrtopedias> Ortopedia_, list<cHospitales>hospit_)
{
	this->Registro = Registro_;
	this->SolicitudEspecial = SolicitudEspecial_;
	this->Ortopedia = Ortopedia_;
	this->hospit = hospit_;
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

list<cHospitales> cANPA::get_hospi()
{
	return this->hospit;
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

void cANPA::set_hospi(list <cHospitales> NuevoEstado)
{
	this->hospit = NuevoEstado;
}


bool cANPA::Buscar_Protesis(cPacientes, cPiezasOrtopedicas)
{
	return false;
}

list<cPacientes> cANPA::Buscar_Paciente_porhospi(string hospi)
{
	list <cPacientes> ::iterator itpaciente;
	list <cHospitales> ::iterator ithospi;
	list <cPacientes> prote;

	unsigned int cont_pro = 0;
	ithospi = hospit.begin();

	for (int i = 0; i < hospit.size(); i++, ithospi++) //hicimos un for que recorra todos los hospitales
	{
		if (hospi == ithospi->get_Nombre()) //nos fijamos segun el hospital que ingresa para saber quienes tienen protesis de ese hospital
		{
			itpaciente = ithospi->get_Pacientes().begin();

			for (int k = 0; k < ithospi->get_Pacientes().size(); k++, itpaciente++) //en segundo lugar hicimos un for que recorra la lista de pacientes de ese hospital
			{
				if (itpaciente->get_TieneProtesis() == true)
				{
					prote.push_back(*itpaciente);
					cont_pro++;
				}
			}
		}
	}

	return prote;
}

list <cPacientes> cANPA::Buscar_Paciente_porpiezas(TipoProtesis piezabuscada)
{
    list<cPacientes> pacientes;
	list<cRegistros>::iterator itregis;
	list <cRegistros> regis;

	itregis = Registro.begin();

	for (int i = 0; i < Registro.size(); i++, itregis++)//hicimos un for que recorra todos los registros
	{
		if (itregis->get_Protesis() == piezabuscada)//chequeamos que cada registro coincida con la protesis buscada
		{
			pacientes.push_back(*itregis->get_NombrePaciente());
		}			
	}
	return pacientes;
}

ostream& operator<<(ostream& out, cANPA& anpa)
{
	list <cRegistros>::iterator itReg;

	itReg = anpa.get_Registro().begin();

	for (int i = 0; i < anpa.get_Registro().size(); i++, itReg++)
	{
		out << "Nombre del Hospital: " << itReg->get_NombreHospital() << endl;
		out << "Nombre del Medico: " << itReg->get_NombreMedico() << endl;
		out << "Fecha de la Solicitud de la protesis: " << itReg->get_FechaSolicitud().tm_min << ":"  << itReg->get_FechaSolicitud().tm_hour <<
					" del dia " << itReg->get_FechaSolicitud().tm_mday << " del mes " << itReg->get_FechaSolicitud().tm_mon << " del anio " << itReg->get_FechaSolicitud().tm_year << endl;
		out << "Fecha Estimativa de Entrega de la protesis: " << itReg->get_FechaEstimativaEntrega().tm_min << ":" << itReg->get_FechaEstimativaEntrega().tm_hour <<
			" del dia " << itReg->get_FechaEstimativaEntrega().tm_mday << " del mes " << itReg->get_FechaEstimativaEntrega().tm_mon << " del anio " << itReg->get_FechaEstimativaEntrega().tm_year << endl;
		out << "Fecha Entregada de la protesis: " << itReg->get_FechaEntregada().tm_min << ":" << itReg->get_FechaEntregada().tm_hour <<
			" del dia " << itReg->get_FechaEntregada().tm_mday << " del mes " << itReg->get_FechaEntregada().tm_mon << " del anio " << itReg->get_FechaEntregada().tm_year << endl;
		out << "Tipo de Protesis: " << itReg->get_Protesis() << endl;
		out << "Nombre del Paciente: " << itReg->get_NombrePaciente() << endl;
	}

	return out;
}