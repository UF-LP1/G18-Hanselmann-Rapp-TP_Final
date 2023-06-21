#include "cANPA.h"

cANPA::cANPA(list <cRegistros*> Registro_, string SolicitudEspecial_, list <cOrtopedias*> Ortopedia_, list<cHospitales*> hospit_)
{
	this->Registro = Registro_;
	this->SolicitudEspecial = SolicitudEspecial_;
	this->Ortopedia = Ortopedia_;
	this->hospit = hospit_;
}

cANPA::~cANPA()
{

}

list<cRegistros*> cANPA::get_Registro()
{
	return this->Registro;
}

string cANPA::get_SolicitudEspecial()
{
	return this->SolicitudEspecial;
}

list<cOrtopedias*> cANPA::get_Ortopedia()
{
	return this->Ortopedia;
}

list<cHospitales*> cANPA::get_hospit()
{
	return this->hospit;
}

void cANPA::set_Registro(list<cRegistros*> NuevoEstado)
{
	this->Registro = NuevoEstado;
}

void cANPA::set_SolicitudEspecial(string NuevoEstado)
{
	this->SolicitudEspecial = NuevoEstado;
}

void cANPA::set_Ortopedia(list<cOrtopedias*> NuevoEstado)
{
	this->Ortopedia = NuevoEstado;
}

void cANPA::set_hospit(list <cHospitales*> NuevoEstado)
{
	this->hospit = NuevoEstado;
}

void cANPA::operator+ (cRegistros* registros)
{
	list <cRegistros*>::iterator itregis;
	bool repite = false;

	for (itregis = Registro.begin(); itregis != Registro.end(); itregis++)
	{
		if (*itregis == registros)
		{
			throw new exception("ERROR: Hay un registro que ya esta aniadido.");
			repite = true;
		}
	}
	if (repite == false)
	{
		Registro.push_back(registros);
	}
	return;
}

void cANPA::Buscar_Protesis(TipoProtesis prote)
{
	list <cHospitales*>::iterator ithos;
	list <cOrtopedias*>::iterator itortop;
	list <cPiezasOrtopedicas*>::iterator itpieort;
	list <cPiezasOrtopedicas*> piezita;
	list <cPiezasOrtopedicas*> nuevapi;
	list <cPacientes*> ::iterator itpaciente;
	list <cPacientes*>  pacientes;
	list <cPacientes*>  nuevopac;

	for (itortop = Ortopedia.begin(); itortop != Ortopedia.end(); itortop++) //recorro todas las ortopedias
	{
		piezita = (*itortop)->get_ListaProtesis();

		for (itpieort = piezita.begin(); itpieort != piezita.end(); itpieort++) //recorra todas las piezas ortopedicas
		{
			cNoQuirurgicas* noquiru = dynamic_cast<cNoQuirurgicas*>(*itpieort);//verificamos si es no quirurgica

			if (noquiru != nullptr)
			{
				if ((*itpieort)->get_Protesis() == prote) //que se fija si la protesis es igual a la pedida
				{
					
					for (ithos = hospit.begin(); ithos != hospit.end(); ithos++) //recorro todos los hospitales
					{
						pacientes = (*ithos)->get_Pacientes();

						for (itpaciente = pacientes.begin(); itpaciente != pacientes.end(); itpaciente++) //en segundo lugar hicimos un for que recorra la lista de pacientes de los hospitales
						{
							if ((*itpaciente)->get_TieneProtesis() == false) //se fija si el paciente ya tenia una protesis
							{
								if ((*itpaciente)->get_RadioMiembro() == (*itpieort)->get_Dimensiones()) //si el radio del miembro es el mismo o no
								{
									nuevopac.push_back(*itpaciente);
									nuevapi.push_back(*itpieort);
									(*itortop)->set_Protesis(nuevapi);
									(*itortop)->Imprimir_Protesis();
									(*ithos)->set_Pacientes(nuevopac);
									(*ithos)->Imprimir_ListaPacientes();
									return; //si cumple con lo anterior buscamos la protesis y se la damos al paciente
								}
							}
						}
					}
				}
			}
			else //si es quirurgica 
			{
				if ((*itpieort)->get_Protesis() == prote) //que se fija si la protesis es igual a la pedida
				{
					for (ithos = hospit.begin(); ithos != hospit.end(); ithos++) //recorro todos los hospitales
					{
						pacientes = (*ithos)->get_Pacientes();

						for (itpaciente = pacientes.begin(); itpaciente != pacientes.end(); itpaciente++) //en segundo lugar hicimos un for que recorra la lista de pacientes de los hospitales
						{
							if ((*itpaciente)->get_TieneProtesis() == false) //se fija si el paciente ya tenia una protesis
							{
								if ((*itpaciente)->get_CompatibleQuirurgica() == true) //si el paciente es compatible quirurgicamente
								{
									nuevopac.push_back(*itpaciente);
									nuevapi.push_back(*itpieort);
									(*itortop)->set_Protesis(nuevapi);
									(*itortop)->Imprimir_Protesis();
									(*ithos)->set_Pacientes(nuevopac);
									(*ithos)->Imprimir_ListaPacientes();
									return; //si cumple con lo anterior buscamos la protesis y se la damos al paciente
								}
							}
						}
					}
				}
			}

		}

	}
	return;
}

bool cANPA::Agregar_Paciente(cPacientes* pac, cHospitales* ho)
{
	list <cPacientes*>::iterator itPaciente;
	list <cHospitales*>::iterator ithos;
	list <cPacientes*> pacientito;

	bool repite = false;

	for (ithos = hospit.begin(); ithos !=hospit.end(); ithos++) //recorro todos los hospitales
	{
		pacientito = (*ithos)->get_Pacientes();
		//itPaciente = pacientito.begin();

		if (ho->get_Nombre() == (*ithos)->get_Nombre())
		{
			for (itPaciente = pacientito.begin(); itPaciente != pacientito.end(); itPaciente++)
			{
				if ((*itPaciente)->get_DNI() != pac->get_DNI())// me fijo en el DNI que es unico
				{
				}
				else
				{
					throw new exception("Este paciente ya esta en la lista.");
					repite = true;
				}
			}
		}
	}

	if (repite == false)
	{
		ho->AgregarPa(pac);
		ho->Imprimir_ListaPacientes();
		return true;
	}
	
	return false;
}

void cANPA::operator- (cRegistros* registros2)
{
	list <cRegistros*> ::iterator itRegi;
	list <cRegistros*> reg;

	reg = Registro;

	for (itRegi = reg.begin(); itRegi != reg.end(); itRegi++)
	{
		if ((*itRegi)->get_NombrePaciente() == registros2->get_NombrePaciente() && (*itRegi)->get_NombreMedico() == registros2->get_NombreMedico() && (*itRegi)->get_NombreHospital() == registros2->get_NombreHospital())
		{
			//Registro.erase(itRegi); //elimina la posicion
			Registro.remove(registros2);
		}
	}
	return;
}

void cANPA::Buscar_Paciente_porhospi(string hospi)
{
	list <cPacientes*> ::iterator itpaciente;
	list <cPacientes*>  pacientes;
	list <cHospitales*> ::iterator ithospi;
	list <cPacientes*> prote;

	unsigned int cont_pro = 0;

	for (ithospi = hospit.begin(); ithospi != hospit.end(); ithospi++) //hicimos un for que recorra todos los hospitales
	{
		if (hospi == (*ithospi)->get_Nombre()) //nos fijamos segun el hospital que ingresa para saber quienes tienen protesis de ese hospital
		{
			pacientes = (*ithospi)->get_Pacientes();

			for (itpaciente = pacientes.begin(); itpaciente != pacientes.end(); itpaciente++) //en segundo lugar hicimos un for que recorra la lista de pacientes de ese hospital
			{
				if ((*itpaciente)->get_TieneProtesis() == true)
				{
					prote.push_back(*itpaciente);
					cont_pro++;
				}
			}

			(*ithospi)->set_Pacientes(prote);
			(*ithospi)->Imprimir_ListaPacientes();
		}
	}

	return ;
}

void cANPA::Buscar_Paciente_porpiezas(TipoProtesis piezabuscada)
{
    list <cPacientes*> pacientes;
	list <cMedicos*> med;
	list <cRegistros*>::iterator itregis;
	list <cRegistros*> regis;

	cHospitales* hos = new cHospitales("Hospital SinAsignar", "Pueyrredon 122", med, pacientes);

	regis = Registro;

	for (itregis = regis.begin(); itregis != regis.end(); itregis++)//hicimos un for que recorra todos los registros
	{
		if ((*itregis)->get_Protesis() == piezabuscada) //chequeamos que cada registro coincida con la protesis buscada
		{
			pacientes.push_back((*itregis)->get_NombrePaciente());
			//(*itregis)->get_NombreHospital()->set_Pacientes(pacientes); //le reasigno la lista que cree recien			
			hos->set_Pacientes(pacientes); //le reasigno la lista creada recien
			//(*itregis)->get_NombreHospital()->Imprimir_ListaPacientes();
		}
	}

	hos->Imprimir_ListaPacientes(); //imprimo la lista creada

	delete hos;

	return ;
}

ostream& operator<<(ostream& out, cANPA& anpa)
{
	list <cRegistros*>::iterator itReg;
	list <cRegistros*> regist;

	regist = anpa.get_Registro();

	for (itReg = regist.begin(); itReg != regist.end(); itReg++)
	{
		out << endl << "\t\tNombre del Hospital: " << (*itReg)->get_NombreHospital()->get_Nombre() << endl;
		out << "\t\tNombre del Medico: " << (*itReg)->get_NombreMedico()->get_Nombre() << endl;
		out << "\t\tFecha de la Solicitud de la protesis: " << (*itReg)->get_FechaSolicitud().tm_min << ":"  << (*itReg)->get_FechaSolicitud().tm_hour <<
					" del dia " << (*itReg)->get_FechaSolicitud().tm_mday << " del mes " << (*itReg)->get_FechaSolicitud().tm_mon << " del anio " << (*itReg)->get_FechaSolicitud().tm_year << endl;
		out << "\t\tFecha Estimativa de Entrega de la protesis: " << (*itReg)->get_FechaEstimativaEntrega().tm_min << ":" << (*itReg)->get_FechaEstimativaEntrega().tm_hour <<
			" del dia " << (*itReg)->get_FechaEstimativaEntrega().tm_mday << " del mes " << (*itReg)->get_FechaEstimativaEntrega().tm_mon << " del anio " << (*itReg)->get_FechaEstimativaEntrega().tm_year << endl;
		out << "\t\tFecha Entregada de la protesis: " << (*itReg)->get_FechaEntregada().tm_min << ":" << (*itReg)->get_FechaEntregada().tm_hour <<
			" del dia " << (*itReg)->get_FechaEntregada().tm_mday << " del mes " << ((*itReg)->get_FechaEntregada().tm_mon + 1) << " del anio " << ((*itReg)->get_FechaEntregada().tm_year + 1900) << endl;
		out << "\t\tTipo de Protesis: " << (*itReg)->get_Protesis() << endl;
		out << "\t\tNombre del Paciente: " << (*itReg)->get_NombrePaciente()->get_Nombre() << endl;
	}

	return out;
}