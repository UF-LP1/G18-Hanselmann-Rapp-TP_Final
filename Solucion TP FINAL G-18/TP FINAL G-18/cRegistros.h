#ifndef _CREGISTROS_H
#define _CREGISTROS_H

#include "cHospitales.h"
#include "cPiezasOrtopedicas.h"

class cRegistros
{
	cHospitales* NombreHospital;
	cMedicos* NombreMedico;
	tm FechaSolicitud;
	tm FechaEstimativaEntrega;
	tm FechaEntregada;
	cPiezasOrtopedicas* Protesis;
	cPacientes* NombrePaciente;
	string SolicitudEspecial;
	list <cOrtopedias> Ortopedia;
};

#endif //_CREGISTROS_H
