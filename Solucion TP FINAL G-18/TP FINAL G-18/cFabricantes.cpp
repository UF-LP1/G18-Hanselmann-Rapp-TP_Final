#include "cFabricantes.h"

cFabricantes::cFabricantes(string Nombre_, string Direccion_, string Habilitacion_, bool SolicitudRequisitos_, string Requisitos_):cAsociacion(Nombre_, Direccion_)
{
	this->Habilitacion = Habilitacion_;
	this->SolicitudRequisitos = SolicitudRequisitos_;
	this->Requisitos = Requisitos_;
}

cFabricantes::~cFabricantes()
{

}

string cFabricantes::get_Habilitacion()
{
	return this->Habilitacion;
}

bool cFabricantes::get_SolicitudRequisitos()
{
	return this->SolicitudRequisitos;
}

string cFabricantes::get_Requisitos()
{
	return this->Requisitos;
}

void cFabricantes::set_Habilitacion(string NuevoEstado)
{
	this->Habilitacion = NuevoEstado;
}

void cFabricantes::set_SolicitudRequisitos(bool NuevoEstado)
{
	this->SolicitudRequisitos = NuevoEstado;
}

void cFabricantes::set_Requisitos(string NuevoEstado)
{
	this->Requisitos = NuevoEstado;
}

void cFabricantes::Imprimir_Requisitos_Med()
{
	cout << "\tIngrese los requisitos para la protesis: " << endl;
	getline(cin, Requisitos);
}
