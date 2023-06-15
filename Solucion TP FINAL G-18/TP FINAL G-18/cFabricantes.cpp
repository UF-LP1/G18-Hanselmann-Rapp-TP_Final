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
	unsigned int Dimensiones = 0;
	TipoMaterial Material;
	TipoProtesis Protesis;
	string numero_serie;

	cout << "\tIngrese las Dimensiones de la Protesis: " << endl;
	cin >> Dimensiones;

	cout << endl << "\n\n\t\t\tTIPO DE MATERIAL" << endl;
	cout << "\t\t\t--------------" << endl;
	cout << "\t1. Quiero que le material sea de Ceramica." << endl;
	cout << "\t2. Quiero que le material sea de Titanio." << endl;
	cout << "\t3. Quiero que le material sea de Cobalto." << endl;
	cout << "\t4. Quiero que le material sea de Cromo." << endl;
	cout << "\t5. Quiero que le material sea de Polietileno." << endl;

	int opcion3 = 0;

	cout << "\tIngrese una Opcion: ";
	cin >> opcion3;

	switch (opcion3)
	{
	case(1):
		TieneProtesis = true; //ya tiene una protesis
		break;

	case(2):
		TieneProtesis = false; //no tiene ninguna protesis
		break;

	case(3):
		TieneProtesis = true; //ya tiene una protesis
		break;

	case(4):
		TieneProtesis = false; //no tiene ninguna protesis
		break;

	case(5):
		TieneProtesis = false; //no tiene ninguna protesis
		break;
	}
}
