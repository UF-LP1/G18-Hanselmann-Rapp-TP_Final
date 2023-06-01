#include "cPiezasOrtopedicas.h"

unsigned int cPiezasOrtopedicas::CantidadTotalPiezas = 0;

cPiezasOrtopedicas::cPiezasOrtopedicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_, cFabricantes Fabricante_)
{
	this->Dimensiones = Dimensiones_;
	this->Material = Material_;
	this->Fabricacion = Fabricacion_;
	this->Fabricante = Fabricante_;
	CantidadTotalPiezas++;
}

cPiezasOrtopedicas::~cPiezasOrtopedicas()
{
	CantidadTotalPiezas--;
}

unsigned int cPiezasOrtopedicas::get_Dimensiones()
{
	return this->Dimensiones;
}

TipoMaterial cPiezasOrtopedicas::get_Material()
{
	return this->Material;
}

time_t cPiezasOrtopedicas::get_Fabricacion()
{
	return this->Fabricacion;
}

cFabricantes cPiezasOrtopedicas::get_Fabricante()
{
	return this->Fabricante;
}

unsigned int cPiezasOrtopedicas::get_CantidadTotalPiezas()
{
	return CantidadTotalPiezas;
}

void cPiezasOrtopedicas::set_Dimensiones(unsigned int NuevoEstado)
{
	this->Dimensiones = NuevoEstado;
}

void cPiezasOrtopedicas::set_Material(TipoMaterial NuevoEstado)
{
	this->Material = NuevoEstado;
}

void cPiezasOrtopedicas::set_Fabricacion(time_t NuevoEstado)
{
	this->Fabricacion = NuevoEstado;
}
