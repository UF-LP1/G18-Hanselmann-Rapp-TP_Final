#ifndef _CANPA_H
#define _CANPA_H

#include "cAsociacion.h"

class cANPA
{
private:
	cHospitales Hospital;
	cMedicos Medico;
	time_t FechaSolicitud;
	time_t FechaEstimativaEntrega;
	time_t FechaEntregada;
	cPiezasOrtopedicas Protesis;
	cPacientes Paciente;
	string SolicitudEspecial;
	list <cOrtopedias> Ortopedia;

public:
	cANPA(cHospitales Hospital_, cMedicos Medico_, time_t FechaSolicitud_, time_t FechaEstimativaEntrega_, time_t FechaEntregada_, 
			cPiezasOrtopedicas Protesis_, cPacientes Paciente_, string SolicitudEspecial_, list <cOrtopedias> Ortopedia_);

	~cANPA();

	cHospitales get_Hospital();
	cMedicos get_Medico();
	time_t get_FechaSolicitud();
	time_t get_FechaEstimativaEntrega();
	time_t get_FechaEntregada();
	cPiezasOrtopedicas get_Protesis();
	cPacientes get_Paciente();
	string get_SolicitudEspecial();
	list <cOrtopedias> get_Ortopedia();

	void set_FechaSolicitud(time_t NuevoEstado);
	void set_FechaEstimativaEntrega(time_t NuevoEstado);
	void set_FechaEntregada(time_t NuevoEstado);
	void set_SolicitudEspecial(string NuevoEstado);
	void set_Ortopedia(list <cOrtopedias> NuevoEstado);

	bool Buscar_Paciente(cHospitales, cPiezasOrtopedicas);
	bool Buscar_Protesis(cPacientes, cPiezasOrtopedicas);

};

#endif //_CANPA_H