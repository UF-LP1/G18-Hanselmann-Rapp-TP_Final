#ifndef _CANPA_H
#define _CANPA_H

#include "cHospitales.h"
#include "cPiezasOrtopedicas.h"

class cANPA
{
private:
	cHospitales* NombreHospital;
	cMedicos* NombreMedico;
	tm FechaSolicitud;
	tm FechaEstimativaEntrega;
	tm FechaEntregada;
	cPiezasOrtopedicas* Protesis;
	cPacientes* NombrePaciente;
	string SolicitudEspecial;
	list <cOrtopedias> Ortopedia;

public:
	cANPA(cHospitales* Hospital_, cMedicos* Medico_, tm FechaSolicitud_, tm FechaEstimativaEntrega_, tm FechaEntregada_, 
			cPiezasOrtopedicas* Protesis_, cPacientes* Paciente_, string SolicitudEspecial_, list <cOrtopedias> Ortopedia_);

	~cANPA();

	cHospitales* get_NombreHospital();
	string get_NombreMedico();
	tm get_FechaSolicitud();
	tm get_FechaEstimativaEntrega();
	tm get_FechaEntregada();
	cPiezasOrtopedicas* get_Protesis();
	string get_NombrePaciente();
	string get_SolicitudEspecial();
	list <cOrtopedias> get_Ortopedia();

	void set_FechaSolicitud(tm NuevoEstado);
	void set_FechaEstimativaEntrega(tm NuevoEstado);
	void set_FechaEntregada(tm NuevoEstado);
	void set_SolicitudEspecial(string NuevoEstado);
	void set_Ortopedia(list <cOrtopedias> NuevoEstado);

	list<cPacientes> Buscar_Paciente(cHospitales hospi, cPiezasOrtopedicas);
	bool Buscar_Protesis(cPacientes, cPiezasOrtopedicas);
	bool Diferencia_Entrega(tm solicitud, tm entregada); //usar operador ternario en el main

};

#endif //_CANPA_H