#ifndef _CANPA_H
#define _CANPA_H

#include "cHospitales.h"
#include "cPiezasOrtopedicas.h"

class cANPA
{
private:
	cHospitales* NombreHospital;
	cMedicos* NombreMedico;
	time_t FechaSolicitud;
	time_t FechaEstimativaEntrega;
	time_t FechaEntregada;
	cPiezasOrtopedicas* Protesis;
	cPacientes* NombrePaciente;
	string SolicitudEspecial;
	list <cOrtopedias> Ortopedia;

public:
	cANPA(cHospitales* Hospital_, cMedicos* Medico_, time_t FechaSolicitud_, time_t FechaEstimativaEntrega_, time_t FechaEntregada_, 
			cPiezasOrtopedicas* Protesis_, cPacientes* Paciente_, string SolicitudEspecial_, list <cOrtopedias> Ortopedia_);

	~cANPA();

	string get_NombreHospital();
	string get_NombreMedico();
	time_t get_FechaSolicitud();
	time_t get_FechaEstimativaEntrega();
	time_t get_FechaEntregada();
	cPiezasOrtopedicas* get_Protesis();
	string get_NombrePaciente();
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