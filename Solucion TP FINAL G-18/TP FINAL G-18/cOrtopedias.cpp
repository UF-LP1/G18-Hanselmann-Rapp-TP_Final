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

string cOrtopedias::to_string_Ortopedias()
{
	/*stringstream salida;
	list <cPiezasOrtopedicas> Piezitas = get_Protesis();
	list <cPiezasOrtopedicas>::iterator itPieOrtop;
	itPieOrtop = Piezitas.begin();


	salida << "Nombre de la Ortopedia: " << this->Nombre << endl << "Direccion de la Ortopedia: " << this->Direccion << endl << "Cantidad de Piezas: " << this->CantidadPiezas << endl;
	for (int i = 0; i < Piezitas.size(); i++, itPieOrtop)
	{
		salida << (itPieOrtop->to_string_PiezasOrtopedias()) << endl;
	}
	return salida.str();*/
	return "";
}

void cOrtopedias:: Imprimir_Protesis()
{
	list <cPiezasOrtopedicas*> Piezitas = get_ListaProtesis();
	list <cPiezasOrtopedicas*>::iterator itPieOrtop;

	cout << "Nombre de la Ortopedia: " << Nombre << endl << "Direccion de la Ortopedia: " << Direccion << endl << "Cantidad de Piezas: " << this->CantidadPiezas << endl;

	for (itPieOrtop = Piezitas.begin(); itPieOrtop != Piezitas.end(); itPieOrtop++)
	{
		cout << "\tCaracteristicas de las Piezas: " << (*itPieOrtop)->to_string_PiezasOrtopedias() << endl;
	}
	return;
}