#ifndef _CPIEZASORTOPEDICAS_H
#define _CPIEZASORTOPEDICAS_H

#include "TipoMaterial.h"
#include "cFabricantes.h"
#include "cPacientes.h"
#include "TipoProtesis.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>
#include <sstream>

using namespace std;

class cPiezasOrtopedicas
{
protected:
	unsigned int Dimensiones;
	TipoMaterial Material;
	tm Fabricacion;
	cFabricantes* NombreFabricante;
	TipoProtesis Protesis;
	string numero_serie;

public:

	static unsigned int CantidadTotalPiezas;

	cPiezasOrtopedicas(int Dimensiones_, TipoMaterial Material_, tm Fabricacion_, cFabricantes* NombreFabricante_, TipoProtesis Protesis_, string numero_serie_);
	~cPiezasOrtopedicas();

	unsigned int get_Dimensiones();
	TipoMaterial get_Material();
	tm get_Fabricacion();
	string get_NombreFabricante();
	static unsigned int get_CantidadTotalPiezas();
	virtual TipoProtesis get_Protesis();
	string get_numeroserie();
	

	void set_Dimensiones(unsigned int NuevoEstado);
	void set_Material(TipoMaterial NuevoEstado);
	void set_Fabricacion(tm NuevoEstado);
	virtual void set_Protesis(TipoProtesis NuevoEstado);
	void set_numeroserie(string NuevoEstado);

	string to_string_PiezasOrtopedias();

};

#endif //_CPIEZASORTOPEDICAS_H