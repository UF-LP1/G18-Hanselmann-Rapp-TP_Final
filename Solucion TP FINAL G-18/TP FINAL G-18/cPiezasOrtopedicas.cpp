#include "cPiezasOrtopedicas.h"


unsigned int cPiezasOrtopedicas::CantidadTotalPiezas = 0;

cPiezasOrtopedicas::cPiezasOrtopedicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_, cFabricantes* NombreFabricante_)
{
	this->Dimensiones = Dimensiones_;
	this->Material = Material_;
	this->Fabricacion = Fabricacion_;
	this->NombreFabricante = NombreFabricante_;

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

string cPiezasOrtopedicas::get_NombreFabricante()
{
	return this->NombreFabricante->get_Nombre();
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

string cPiezasOrtopedicas::to_string_PiezasOrtopedias()
{
	/*stringstream salida;

	salida << "Dimensiones: " << this->Dimensiones << endl << "Tipo de Material: " << this->Material << endl << "Fecha de Fabricacion: " <<
			this->Fabricacion << endl << "Nombre del Fabricante: " << this->NombreFabricante->get_Nombre() << endl << "Cantidad de Piezas Totales: " << CantidadTotalPiezas;
	
	return salida.str();*/
	return "";
}
