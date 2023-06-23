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

	int opciondia = 0;

	do 
	{
		cout << endl << "\tIngrese el dia de Nacimiento de su paciente (DD): ";
		cin >> opciondia;
			
		switch (opciondia)
		{
		case(1):
			Nacimiento.tm_mday = 1; //dia 1
			break;

		case(2):
			Nacimiento.tm_mday = 2; //Dia 2
			break;


		case(3):
			Nacimiento.tm_mday = 3; //Dia 3
			break;

		case(4):
			Nacimiento.tm_mday = 4; //Dia 4
			break;

		case(5):
			Nacimiento.tm_mday = 5; //Dia 5
			break;

		case(6):
			Nacimiento.tm_mday = 6; //dia 6
			break;

		case(7):
			Nacimiento.tm_mday = 7; //Dia 7
			break;

		case(8):
			Nacimiento.tm_mday = 8; //Dia 8
			break;

		case(9):
			Nacimiento.tm_mday = 9; //Dia 9
			break;

		case(10):
			Nacimiento.tm_mday = 10; //Dia 10
			break;

		case(11):
			Nacimiento.tm_mday = 11; //dia 11
			break;

		case(12):
			Nacimiento.tm_mday = 12; //Dia 12
			break;

		case(13):
			Nacimiento.tm_mday = 13; //Dia 13
			break;

		case(14):
			Nacimiento.tm_mday = 14; //Dia 14
			break;

		case(15):
			Nacimiento.tm_mday = 15; //Dia 15
			break;

		case(16):
			Nacimiento.tm_mday = 16; //dia 16
			break;

		case(17):
			Nacimiento.tm_mday = 17; //Dia 17
			break;

		case(18):
			Nacimiento.tm_mday = 18; //Dia 18
			break;

		case(19):
			Nacimiento.tm_mday = 19; //Dia 19
			break;

		case(20):
			Nacimiento.tm_mday = 20; //Dia 20
			break;

		case(21):
			Nacimiento.tm_mday = 21; //dia 21
			break;

		case(22):
			Nacimiento.tm_mday = 22; //Dia 22
			break;

		case(23):
			Nacimiento.tm_mday = 23; //Dia 23
			break;

		case(24):
			Nacimiento.tm_mday = 24; //Dia 24
			break;

		case(25):
			Nacimiento.tm_mday = 25; //Dia 25
			break;

		case(26):
			Nacimiento.tm_mday = 26; //dia 26
			break;

		case(27):
			Nacimiento.tm_mday = 27; //Dia 27
			break;

		case(28):
			Nacimiento.tm_mday = 28; //Dia 28
			break;

		case(29):
			Nacimiento.tm_mday = 29; //Dia 29
			break;

		case(30):
			Nacimiento.tm_mday = 30; //Dia 30
			break;

		case(31):
			Nacimiento.tm_mday = 31; //Dia 31
			break;
		}

	}while (opciondia > 32);

	int opcionmes = 0;

	do 
	{
		cout << endl << "\tIngrese el mes de Nacimiento de su paciente (MM): ";
		cin >> opcionmes;

		switch (opcionmes)
		{
		case(1):
			Nacimiento.tm_mon = 0; //Mes Enero
			break;

		case(2):
			Nacimiento.tm_mon = 1; //Mes Febrero
			break;

		case(3):
			Nacimiento.tm_mon = 2; //Mes Marzo
			break;

		case(4):
			Nacimiento.tm_mon = 3; //Mes Abril
			break;

		case(5):
			Nacimiento.tm_mon = 4; //Mes Mayo
			break;

		case(6):
			Nacimiento.tm_mon = 5; //Mes JUnio
			break;

		case(7):
			Nacimiento.tm_mon = 6; //Mes JUlio
			break;

		case(8):
			Nacimiento.tm_mon = 7; //Mes Agosto
			break;

		case(9):
			Nacimiento.tm_mon = 8; //Mes Septiembre
			break;

		case(10):
			Nacimiento.tm_mon = 9; //Mes Octubre
			break;

		case(11):
			Nacimiento.tm_mon = 10; //Mes Noviembre
			break;

		case(12):
			Nacimiento.tm_mon = 11; //Dia Diciembre
			break;
		}

	} while (opcionmes > 13);

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
	//Nacimiento.tm_mon = anio_mes - 1;

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
		"\t\tFecha de Nacimiento: " << "Dia: " << this->Nacimiento.tm_mday << " del mes " << this->Nacimiento.tm_mon << " del anio " << this->Nacimiento.tm_year + 1900 << endl << "\t\tTipo de Alergia: " <<
		this->Alergias << endl << "\t\tNombre del Hospital asistido: " << this->NombreHospital << endl << "\t\tRadio del miembro: " << this->RadioMiembro << endl <<
		"\t\tEs compatible quirurgicamente: " << compat << endl << "\t\tTiene Protesis: " << tprote;

	return salida.str();
}