#ifndef _CFABRICANTES_H
#define _CFABRICANTES_H

#include "cAsociacion.h"

class cFabricantes
{

public:

	string get_Habilitacion();

	void set_Direccion(string NuevoEstado);

	string get_Direccion();

	void set_Direccion(string NuevoEstado);


private:
	string Habilitacion;
	string Direccion;

};

#endif //_CFABRICANTES_H