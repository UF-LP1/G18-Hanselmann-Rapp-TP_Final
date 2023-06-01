#ifndef _CASOCIACION_H
#define _CASOCIACION_H

#include "cFabricantes.h"
#include "cOrtopedias.h"
#include "cHospitales.h"

class cAsociacion
{
protected:
	string Nombre;
	string Direccion;

public:
	cAsociacion(string Nombre_, string Direccion_);
	~cAsociacion();

	string get_Nombre();
	string get_Direccion();

	void set_Nombre(string NuevoEstado);
	void set_Direccion(string NuevoEstado);
};

#endif //_CASOCIACION_H