#ifndef _CPIEZASORTOPEDICAS_H
#define _CPIEZASORTOPEDICAS_H

#include "TipoMaterial.h"
#include "cQuirurgicas.h"
#include "cNoQuirurgicas.h"
#include "cFabricantes.h"

class cPiezasOrtopedicas
{
protected:
	unsigned int Dimensiones;
	TipoMaterial Material;
	time_t Fabricacion;
	cFabricantes Fabricante;
	static unsigned int CantidadTotalPiezas;

public:
	cPiezasOrtopedicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_, cFabricantes Fabricante_);
	~cPiezasOrtopedicas();

	unsigned int get_Dimensiones();
	TipoMaterial get_Material();
	time_t get_Fabricacion();
	cFabricantes get_Fabricante();
	static unsigned int get_CantidadTotalPiezas();

	void set_Dimensiones(unsigned int NuevoEstado);
	void set_Material(TipoMaterial NuevoEstado);
	void set_Fabricacion(time_t NuevoEstado);

};

#endif //_CPIEZASORTOPEDICAS_H