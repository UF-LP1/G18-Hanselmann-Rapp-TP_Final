#ifndef _CPIEZASORTOPEDICAS_H
#define _CPIEZASORTOPEDICAS_H

#include "TipoMaterial.h"
#include "cFabricantes.h"
#include "cPacientes.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

class cPiezasOrtopedicas
{
protected:
	unsigned int Dimensiones;
	TipoMaterial Material;
	time_t Fabricacion;
	cFabricantes* NombreFabricante;
	static unsigned int CantidadTotalPiezas;
	

public:
	cPiezasOrtopedicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_, cFabricantes* NombreFabricante_);
	~cPiezasOrtopedicas();

	unsigned int get_Dimensiones();
	TipoMaterial get_Material();
	time_t get_Fabricacion();
	string get_NombreFabricante();
	static unsigned int get_CantidadTotalPiezas();

	void set_Dimensiones(unsigned int NuevoEstado);
	void set_Material(TipoMaterial NuevoEstado);
	void set_Fabricacion(time_t NuevoEstado);
	string to_string_PiezasOrtopedias();

};

#endif //_CPIEZASORTOPEDICAS_H