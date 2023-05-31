#ifndef _CORTOPEDIAS_H
#define _CORTOPEDIAS_H

#include "cAsociacion.h"
#include "cFabricantes.h"

class cOrtopedias
{
private:
	list <cPiezasOrtopedicas> Protesis;
	unsigned int CantidadPiezas;

public:
	list <cPiezasOrtopedicas> get_Protesis();
	unsigned int get_CantidadPiezas();

	void set_Protesis(list <cPiezasOrtopedicas> NuevoEstado);
	void set_CantidadPiezas(unsigned int NuevoEstado);
	void Imprimir_Protesis();

};

#endif //_CORTOPEDIAS_H