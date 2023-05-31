#ifndef _CPIEZASORTOPEDICAS_H
#define _CPIEZASORTOPEDICAS_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include <ctime>

#include "TipoMaterial.h"
#include "cFabricantes.h"


class cPiezasOrtopedicas
{
public:

	unsigned int get_Dimensiones();
	
	void set_Dimensiones(unsigned int NuevoEstado);

	static unsigned int get_CantidadTotalPiezas();

protected:
	unsigned int Dimensiones;
	TipoMaterial Material;
	time_t Fabricacion;
	cFabricantes Fabricante;
	static unsigned int CantidadTotalPiezas;

};

#endif //_CPIEZASORTOPEDICAS_H

