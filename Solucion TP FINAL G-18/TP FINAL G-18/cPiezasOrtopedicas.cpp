#include "cPiezasOrtopedicas.h"


unsigned int cPiezasOrtopedicas::CantidadTotalPiezas = 0;

cPiezasOrtopedicas::cPiezasOrtopedicas(int Dimensiones_, TipoMaterial Material_, tm Fabricacion_, cFabricantes* NombreFabricante_, TipoProtesis Protesis_, string numero_serie_)
{
	this->Dimensiones = Dimensiones_;
	this->Material = Material_;
	this->Fabricacion = Fabricacion_;
	this->NombreFabricante = NombreFabricante_;
	this->Protesis = Protesis_;
	this->numero_serie = numero_serie_;

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

tm cPiezasOrtopedicas::get_Fabricacion()
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

TipoProtesis cPiezasOrtopedicas::get_Protesis()
{
	return this->Protesis;
}

string cPiezasOrtopedicas::get_numeroserie()
{
	return this->numero_serie;
}

void cPiezasOrtopedicas::set_Dimensiones(unsigned int NuevoEstado)
{
	this->Dimensiones = NuevoEstado;
}

void cPiezasOrtopedicas::set_Material(TipoMaterial NuevoEstado)
{
	this->Material = NuevoEstado;
}

void cPiezasOrtopedicas::set_Fabricacion(tm NuevoEstado)
{
	this->Fabricacion = NuevoEstado;
}

void cPiezasOrtopedicas::set_Protesis(TipoProtesis NuevoEstado)
{
	this->Protesis = NuevoEstado;
}

void cPiezasOrtopedicas::set_numeroserie(string NuevoEstado)
{
	this->numero_serie = NuevoEstado;
}

string cPiezasOrtopedicas::to_string_PiezasOrtopedias()
{
	stringstream salida;

	salida << "Dimensiones: " << this->Dimensiones << endl << "Tipo de Material: " << this->Material << endl << "Fecha de Fabricacion: " << "Día: " << 
			this->Fabricacion.tm_mday << " del mes " << this->Fabricacion.tm_mon << " del anio " << this->Fabricacion.tm_year << endl << "Nombre del Fabricante: " <<
			this->NombreFabricante->get_Nombre() << endl << "Cantidad de Piezas Totales: " << CantidadTotalPiezas << endl << "Tipo de Protesis: " << this->get_Protesis() << endl << 
			"Numero de Serie: " << this->get_numeroserie();
	
	return salida.str();
}

