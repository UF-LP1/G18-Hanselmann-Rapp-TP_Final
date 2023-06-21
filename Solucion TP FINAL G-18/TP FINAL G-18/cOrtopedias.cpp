#include "cOrtopedias.h"

cOrtopedias::cOrtopedias(string Nombre_, string Direccion_, list<cPiezasOrtopedicas*> ListaProtesis_, unsigned int CantidadPiezas_) :cAsociacion(Nombre_, Direccion_)
{
	this->ListaProtesis = ListaProtesis_;
	this->CantidadPiezas = CantidadPiezas_;
}

cOrtopedias::~cOrtopedias()
{

}

list <cPiezasOrtopedicas*> cOrtopedias::get_ListaProtesis()
{
	return this->ListaProtesis;
}

unsigned int cOrtopedias::get_CantidadPiezas()
{
	return this->CantidadPiezas;
}

void cOrtopedias::set_Protesis(list <cPiezasOrtopedicas*> NuevoEstado)
{
	this->ListaProtesis = NuevoEstado;
}

void cOrtopedias::set_CantidadPiezas(unsigned int NuevoEstado)
{
	this->CantidadPiezas = NuevoEstado;
}

void cOrtopedias:: Imprimir_Protesis()
{
	list <cPiezasOrtopedicas*> Piezitas = get_ListaProtesis();
	list <cPiezasOrtopedicas*>::iterator itPieOrtop;

	cout << "\t\tNombre de la Ortopedia: " << Nombre << endl << "\t\tDireccion de la Ortopedia: " << Direccion << endl << "\t\tCantidad de Piezas: " << this->CantidadPiezas << endl;

	for (itPieOrtop = Piezitas.begin(); itPieOrtop != Piezitas.end(); itPieOrtop++)
	{
		cout << endl << "\tCaracteristicas de las Piezas: " << endl << (*itPieOrtop)->to_string_PiezasOrtopedias() << endl;
	}
	return;
}