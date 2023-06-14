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

ostream& operator<<(ostream& out, cANPA& anpa)
{
	//out << anpa.get_Ortopedia();
	//out << anpa.get_Registro();
	out << anpa.get_SolicitudEspecial();

	return out;
}


list<cPacientes> cANPA::Buscar_Paciente_porhospi(cHospitales hospi)
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

string cANPA::Buscar_Paciente_porpiezas(cRegistros* regis,string piezabuscada)
{
	
    string paciente;
	list<cPacientes>::iterator itpac;
	list<cHospitales>::iterator ithos;

	

	ithos = hospit.begin();


	for (int i = 0; i < hospit.size(); i++, ithos++)//hicimos un for que recorra todos los hospitales
	{
		itpac = ithos->get_Pacientes().begin();

		for (int k = 0; k < ithos->get_Pacientes().size(); k++, itpac++)//en segundo lugar hicimos un for que recorra la lista de pacientes de cada hospital
		{
			if (itpac->get_TieneProtesis() == true)//chequeamos que los pacientes tengan protesis
			{
				if (regis->get_Protesis() == piezabuscada)//nos fijamos que si el numero de serie del paciente buscado es igual al pasado por parametro 
				{
					paciente = itpac->get_Nombre();//
				}
			}
		}				
	}
	return paciente;
}
