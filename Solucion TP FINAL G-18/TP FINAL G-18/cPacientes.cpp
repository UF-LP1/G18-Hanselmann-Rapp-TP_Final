#include "cPacientes.h"

cPacientes::cPacientes(string Nombre_, string Apellido_, string Telefono_, tm Nacimiento_, TipoAlergia Alergias_, string NombreHospital_, 
							unsigned int RadioMiembro_, bool CompatibleQuirurgica_, bool TieneProtesis_) :cPersona(Nombre_, Apellido_, Telefono_)
{
	this->Nacimiento = Nacimiento_;
	this->Alergias = Alergias_;
	this->NombreHospital = NombreHospital_;
	this->RadioMiembro = RadioMiembro_;
	this->CompatibleQuirurgica = CompatibleQuirurgica_;
	this->TieneProtesis = TieneProtesis_;
}

cPacientes::~cPacientes()
{

}

tm cPacientes::get_Nacimiento()
{
	return this->Nacimiento;
}

TipoAlergia cPacientes::get_Alergias()
{
	return this->Alergias;
}

string cPacientes::get_NombreHospital()
{
	return this->NombreHospital;
}

unsigned int cPacientes::get_RadioMiembro()
{
	return this->RadioMiembro;
}

bool cPacientes::get_CompatibleQuirurgica()
{
	return this->CompatibleQuirurgica;
}

bool cPacientes::get_TieneProtesis()
{
	return this->TieneProtesis;
}

void cPacientes::set_Nacimiento(tm NuevoEstado)
{
	this->Nacimiento = NuevoEstado;
}

void cPacientes::set_Alergias(TipoAlergia NuevoEstado)
{
	this->Alergias = NuevoEstado;
}

void cPacientes::set_RadioMiembro(unsigned int NuevoEstado)
{
	this->RadioMiembro = NuevoEstado;
}

void cPacientes::set_CompatibleQuirurgica(bool NuevoEstado)
{
	this->CompatibleQuirurgica = NuevoEstado;
}

void cPacientes::set_TieneProtesis(bool NuevoEstado)
{
	this->TieneProtesis = NuevoEstado;
}

void cPacientes::Imprimir_Preguntas_Agregar_Paciente()
{
	string alerg = "";

	cout << "\tIngrese el Nombre de su paciente: ";
	getline(std::cin, Nombre);

	cout << endl << "\tIngrese el Apellido de su paciente: ";
	getline(std::cin, Apellido);

	cout << endl << "\tIngrese el telefono de su paciente: ";
	getline(std::cin, Telefono);

	cout << endl << "\tIngrese el dia de Nacimiento de su paciente: ";
	cin >> Nacimiento.tm_mday;

	cout << endl << "\tIngrese el mes de Nacimiento de su paciente: ";
	cin >> Nacimiento.tm_mon;

	cout << endl << "\tIngrese el anio de Nacimiento de su paciente: ";
	cin >> Nacimiento.tm_year;

	cout << endl << "\n\n\t\t\tTIPOS DE ALERGIAS" << endl;
	cout << "\t\t\t--------------" << endl;
	cout << "\t1. Mi paciente es Xenobiotico." << endl;
	cout << "\t2. Mi paciente tiene Sensibilidad Metalica." << endl;
	cout << "\t3. Mi paciente no tiene alergias." << endl;
	cout << "\t4. Mi paciente tiene Liquenoide." << endl;
	cout << "\t5. Mi paciente es alergico a los Carcinogenicos" << endl;

	int opcion = 0;

	cout << "\tIngrese una Opcion de los tipos de Alergia: ";
	cin >> opcion;

	switch (opcion)
	{
	case(1):
		Alergias == 0; //Xenobiotico
		break;

	case(2):
		Alergias == 1; //Sensibilidad Metalica
		break;

	case(3):
		Alergias == 2; // Sin Alergias
		break;

	case(4):
		Alergias == 3; //Liquenoide
		break;

	case(5):
		Alergias == 4; //Carcinogenicos
		break;

	}

	cout << endl << "\tIngrese el Nombre del hospital donde se atiende el paciente: ";
	getline(std::cin, NombreHospital);

	cout << endl << "\tIngrese el radio del miembro de su paciente: ";
	cin >> RadioMiembro;

	cout << endl << "\n\n\t\t\tCOMPATIBLE QUIRURGICAMENTE" << endl;
	cout << "\t\t\t--------------" << endl;
	cout << "\t1. Mi paciente es Compatible Quirurgicamente." << endl;
	cout << "\t2. Mi paciente no es Compatible Quirurgicamente." << endl;

	int opcion2 = 0;

	cout << "\tIngrese una Opcion: ";
	cin >> opcion2;

	switch (opcion2)
	{
	case(1):
		CompatibleQuirurgica = true; //Xenobiotico
		break;

	case(2):
		CompatibleQuirurgica = false; //Sensibilidad Metalica
		break;

	}

	cout << endl << "\n\n\t\t\tTIENE PROTESIS" << endl;
	cout << "\t\t\t--------------" << endl;
	cout << "\t1. Mi paciente tiene una protesis." << endl;
	cout << "\t2. Mi paciente no tiene una protesis." << endl;

	int opcion3 = 0;

	cout << "\tIngrese una Opcion: ";
	cin >> opcion3;

	switch (opcion3)
	{
	case(1):
		TieneProtesis = true; //Xenobiotico
		break;

	case(2):
		TieneProtesis = false; //Sensibilidad Metalica
		break;

	}

}