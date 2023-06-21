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

string cFabricantes::to_string_pro()
{
	stringstream salida;

	string req = SolicitudRequisitos ? "si" : "no";

	salida << "\tCaracteristicas Protesis:" << endl << "Nombre de la Fabrica: " << this->Nombre << endl << "Direccion de la Fabrica: " << this->Direccion << endl 
			<< "Habilitacion: " << this->Habilitacion << endl << "El fabricante acepta los requisitos dados : " << req << endl << "Requisitos: " << this->Requisitos << endl;

	return salida.str();
}

