#ifndef _CORTOPEDIAS_H
#define _CORTOPEDIAS_H

#include "cAsociacion.h"
#include "cFabricantes.h"

class cOrtopedias: public cAsociacion
{
public:

	cOrtopedias(string Nombre_, string Direccion_, list<cPiezasOrtopedicas> Protesis_, unsigned int CantidadPiezas_);

	~cOrtopedias();

	list <cPiezasOrtopedicas> get_Protesis();
	unsigned int get_CantidadPiezas();

	void set_Protesis(list <cPiezasOrtopedicas> NuevoEstado);
	void set_CantidadPiezas(unsigned int NuevoEstado);
	void Imprimir_Protesis();

private:
	list <cPiezasOrtopedicas> Protesis;
	unsigned int CantidadPiezas;
};

#endif //_CORTOPEDIAS_H