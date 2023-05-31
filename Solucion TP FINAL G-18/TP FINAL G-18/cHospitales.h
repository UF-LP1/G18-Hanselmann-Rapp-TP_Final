#ifndef _CHOSPITALES_H
#define _CHOSPITALES_H

#include "cAsociacion.h"

class cHospitales : 
	public cAsociacion
{
	list <cMedicos> Medicos;
	list <cPacientes> Pacientes;
};

#endif //_CHOSPITALES_H
