#include "cPacientes.h"

cPacientes::cPacientes(string Nombre_, string Apellido_, string Telefono_, string DNI_,  tm Nacimiento_, TipoAlergia Alergias_, string NombreHospital_, 
							unsigned int RadioMiembro_, bool CompatibleQuirurgica_, bool TieneProtesis_) :cPersona(Nombre_, Apellido_, Telefono_)
{
	this->DNI = DNI_;
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

string cPacientes::get_DNI()
{
	return this->DNI;
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

cPacientes* cPacientes::Imprimir_Preguntas_Agregar_Paciente()
{
	system("cls");

	string alerg = "", nombrehop = "";
	unsigned int anio_nac = 0, anio_mes = 0, radio = 0;

	cout << "\tIngrese el Nombre de su paciente: ";
	cin >> Nombre;

	cout << endl << "\tIngrese el Apellido de su paciente: ";
	cin >> Apellido;

	cout << endl << "\tIngrese el telefono de su paciente: ";
	cin >> Telefono;

	cout << endl << "\tIngrese el DNI de su paciente: ";
	cin >> DNI;

	cout << endl << "\tIngrese el dia de Nacimiento de su paciente (DD): ";
	cin >> Nacimiento.tm_mday;

	cout << endl << "\tIngrese el mes de Nacimiento de su paciente (MM): ";
	cin >> anio_mes;

	cout << endl << "\tIngrese el anio de Nacimiento de su paciente: ";
	cin >> anio_nac;

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
		Alergias = Xenobiotico; //Xenobiotico
		break;

	case(2):
		Alergias = SensibilidadMetalica; //Sensibilidad Metalica
		break;

	case(3):
		Alergias = SinAlergia; // Sin Alergias
		break;

	case(4):
		Alergias = Liquenoide; //Liquenoide
		break;

	case(5):
		Alergias = Carcinogenicos; //Carcinogenicos
		break;

	}

	cout << endl << "\n\n\t\t\tHOSPITAL INGRESADO: " << endl;
	cout << "\t\t\t--------------" << endl;
	cout << "\t1. Mi paciente se atiende en el Hospital Favaloro." << endl;
	cout << "\t2. Mi paciente se atiende en el Hospital Aleman." << endl;
	cout << "\t3. Mi paciente se atiende en el Hospital Italiano." << endl;

	int opcion0 = 0;

	cout << "\tIngrese una Opcion: ";
	cin >> opcion0;

	switch (opcion0)
	{
	case(1):
		NombreHospital = "Hospital Favaloro"; //Hospital Favaloro
		break;

	case(2):
		NombreHospital = "Hospital Aleman"; //Hospital Aleman
		break;

	case(3):
		NombreHospital = "Hospital Italiano"; //Hospital Italiano
		break;
	}

	cout << endl << "\tIngrese el radio del miembro de su paciente en milimetros: ";
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
		TieneProtesis = true; //ya tiene una protesis
		break;

	case(2):
		TieneProtesis = false; //no tiene ninguna protesis
		break;

	}

	Nacimiento.tm_year = anio_nac - 1900;
	Nacimiento.tm_mon = anio_mes - 1;

	Nacimiento = {0, 0, 0, Nacimiento.tm_mday, Nacimiento.tm_mon, Nacimiento.tm_year};

	cPacientes* PacienteCreado = new cPacientes (Nombre, Apellido, Telefono, DNI, Nacimiento, Alergias, NombreHospital, RadioMiembro, CompatibleQuirurgica, TieneProtesis);

	return PacienteCreado;
}

string cPacientes::to_string_Pacientes()
{
	stringstream salida;

	string compat = CompatibleQuirurgica ? "si" : "no";
	string tprote = TieneProtesis ? "si" : "no";

	salida << "\t\tNombre y Apellido: " << this->Nombre << " " << this->Apellido << endl << "\t\tTelefono: " << this->Telefono << endl << "\t\tDNI: " << this->DNI << endl <<
		"\t\tFecha de Nacimiento: " << "Dia: " << this->Nacimiento.tm_mday << " del mes " << this->Nacimiento.tm_mon << " del anio " << this->Nacimiento.tm_year << endl << "\t\tTipo de Alergia: " <<
		this->Alergias << endl << "\t\tNombre del Hospital asistido: " << this->NombreHospital << endl << "\t\tRadio del miembro: " << this->RadioMiembro << endl <<
		"\t\tEs compatible quirurgicamente: " << compat << endl << "\t\tTiene Protesis: " << tprote;

	return salida.str();
}