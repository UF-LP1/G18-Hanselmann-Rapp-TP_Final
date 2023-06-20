#include "cANPA.h"

cANPA::cANPA(list <cRegistros> Registro_, string SolicitudEspecial_, list <cOrtopedias> Ortopedia_, list<cHospitales> hospit_)
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

void cANPA::operator+ (cRegistros registros)
{
	Registro.push_back(registros);
	return;
}

bool cANPA::Agregar_Paciente(cPacientes pac, cHospitales ho)
{
	list <cPacientes>::iterator itPaciente;
	list <cHospitales>::iterator ithos;
	list <cPacientes> pacientito;

	ithos = hospit.begin();
	bool repite = false;

	for (int k = 0; k <hospit.size(); k++, ithos++) //recorro todos los hospitales
	{
		pacientito = ithos->get_Pacientes();
		itPaciente = pacientito.begin();

		if (ho.get_Nombre() == ithos->get_Nombre())
		{
			for (int i = 0; i < pacientito.size(); i++, itPaciente++)
			{
				if (itPaciente->get_Nombre() != pac.get_Nombre() && itPaciente->get_Apellido() != pac.get_Apellido())
				{
				}
				else
				{
					throw new exception("Este paciente ya esta en la lista.");
					repite == true;
				}
			}
		}
	}
	if (repite == false)
	{
		pacientito.push_back(pac);
		return true;
	}
	
	return false;
}

void cANPA::operator- (cRegistros registros2)
{
	list <cRegistros> ::iterator itRegi;

	itRegi = Registro.begin();

	for (int i = 0; i < Registro.size(); i++, itRegi++)
	{
		if (itRegi->get_NombrePaciente() == registros2.get_NombrePaciente() && itRegi->get_NombreMedico() == registros2.get_NombreMedico() && itRegi->get_NombreHospital() == registros2.get_NombreHospital())
		{
			Registro.erase(itRegi); //elimina la posicion
		}
	}
	return;
}

list<cPacientes> cANPA::Buscar_Paciente_porhospi(string hospi)
{
	list <cPacientes> ::iterator itpaciente;
	list <cPacientes>  pacientes;
	list <cHospitales> ::iterator ithospi;
	list <cPacientes> prote;

	unsigned int cont_pro = 0;

	for (ithospi = hospit.begin(); ithospi != hospit.end(); ithospi++) //hicimos un for que recorra todos los hospitales
	{
		if (hospi == ithospi->get_Nombre()) //nos fijamos segun el hospital que ingresa para saber quienes tienen protesis de ese hospital
		{
			pacientes = ithospi->get_Pacientes();

			for (itpaciente = pacientes.begin(); itpaciente != pacientes.end(); itpaciente++) //en segundo lugar hicimos un for que recorra la lista de pacientes de ese hospital
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
		out << "Nombre del Hospital: " << itReg->get_NombreHospital()->get_Nombre() << endl;
		out << "Nombre del Medico: " << itReg->get_NombreMedico()->get_Nombre() << endl;
		out << "Fecha de la Solicitud de la protesis: " << itReg->get_FechaSolicitud().tm_min << ":"  << itReg->get_FechaSolicitud().tm_hour <<
					" del dia " << itReg->get_FechaSolicitud().tm_mday << " del mes " << itReg->get_FechaSolicitud().tm_mon << " del anio " << itReg->get_FechaSolicitud().tm_year << endl;
		out << "Fecha Estimativa de Entrega de la protesis: " << itReg->get_FechaEstimativaEntrega().tm_min << ":" << itReg->get_FechaEstimativaEntrega().tm_hour <<
			" del dia " << itReg->get_FechaEstimativaEntrega().tm_mday << " del mes " << itReg->get_FechaEstimativaEntrega().tm_mon << " del anio " << itReg->get_FechaEstimativaEntrega().tm_year << endl;
		out << "Fecha Entregada de la protesis: " << itReg->get_FechaEntregada().tm_min << ":" << itReg->get_FechaEntregada().tm_hour <<
			" del dia " << itReg->get_FechaEntregada().tm_mday << " del mes " << itReg->get_FechaEntregada().tm_mon << " del anio " << itReg->get_FechaEntregada().tm_year << endl;
		out << "Tipo de Protesis: " << itReg->get_Protesis() << endl;
		out << "Nombre del Paciente: " << itReg->get_NombrePaciente()->get_Nombre() << endl;
	}

	return out;
}