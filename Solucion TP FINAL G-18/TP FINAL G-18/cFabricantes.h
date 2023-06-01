#ifndef _CFABRICANTES_H
#define _CFABRICANTES_H

#include "cAsociacion.h"
#include "cPiezasOrtopedicas.h"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include <ctime>

using namespace std;

class cFabricantes: public cAsociacion
{

public:

	cFabricantes(string Nombre_, string Direccion_, string Habilitacion_, bool SolicitudRequisitos_, string Requisitos_);

	~cFabricantes();

	string get_Habilitacion();
	bool get_SolicitudRequisitos();
	string get_Requisitos();

	void set_Habilitacion(string NuevoEstado);
	void set_SolicitudRequisitos(bool NuevoEstado);
	void set_Requisitos(string NuevoEstado);

private:
	string Habilitacion;
	bool SolicitudRequisitos;
	string Requisitos;

};

#endif //_CFABRICANTES_H