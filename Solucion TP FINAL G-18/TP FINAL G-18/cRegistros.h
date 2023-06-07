#ifndef _CREGISTROS_H
#define _CREGISTROS_H

#include "cHospitales.h"
#include "cPiezasOrtopedicas.h"

class cRegistros
{
private:
	cHospitales* NombreHospital;
	cMedicos* NombreMedico;
	tm FechaSolicitud;
	tm FechaEstimativaEntrega;
	tm FechaEntregada;
	cPiezasOrtopedicas* Protesis;
	cPacientes* NombrePaciente;

public:
	cRegistros(cHospitales* Hospital_, cMedicos* Medico_, tm FechaSolicitud_, tm FechaEstimativaEntrega_, tm FechaEntregada_,
		cPiezasOrtopedicas* Protesis_, cPacientes* Paciente_, string SolicitudEspecial_, list <cOrtopedias> Ortopedia_);

	~cRegistros();

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
};

#endif //_CREGISTROS_H
