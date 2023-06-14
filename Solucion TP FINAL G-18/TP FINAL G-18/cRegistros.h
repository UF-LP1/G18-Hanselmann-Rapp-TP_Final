#ifndef _CREGISTROS_H
#define _CREGISTROS_H

#include "cHospitales.h"
#include "cPiezasOrtopedicas.h"
#include "cNoQuirurgicas.h"
#include "cQuirurgicas.h"
#include "cPacientes.h"

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
				cPiezasOrtopedicas* Protesis_, cPacientes* Paciente_);

	~cRegistros();

	cHospitales* get_NombreHospital();
	cMedicos* get_NombreMedico();
	tm get_FechaSolicitud();
	tm get_FechaEstimativaEntrega();
	tm get_FechaEntregada();
	TipoProtesis get_Protesis();
	cPacientes* get_NombrePaciente();
	
	void set_FechaSolicitud(tm NuevoEstado);
	void set_FechaEstimativaEntrega(tm NuevoEstado);
	void set_FechaEntregada(tm NuevoEstado);

	int consrandom(int maximo, int minimo); //lo uso para calcular los randoms
	bool bisiestos(int anio); //lo uso para saber si es un anio bisiesto o no.
	bool Diferencia_Entrega(); //lo uso para saber si la protesis se entrego a tiempo o no.

	
};

#endif //_CREGISTROS_H

