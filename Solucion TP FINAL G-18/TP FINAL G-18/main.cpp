#include "cANPA.h"
#include "cOrtopedias.h"
#include "cPersona.h"
#include "cQuirurgicas.h"
#include "cNoQuirurgicas.h"
#include "main.h"

#include <iostream>

void Menu_Principal()
{
	cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
	cout << "\t\t\t--------------" << endl;
	cout << "\t1. Quiero agregar un paciente a un hospital." << endl;
	cout << "\t2. Quiero saber que pacientes usaran un tipo de protesis. " << endl;
	cout << "\t3. Quiero saber que pacientes tienen protesis segun un hospital. " << endl;
	cout << "\t4. Quiero buscar una protesis." << endl;
	cout << "\t5. Quiero solicitar una protesis y asignarla." << endl;
	cout << "\t6. Quiero saber si la protesis fue entregada a tiempo" << endl;
	cout << "\t7. Quiero ver los registros del ANPA" << endl;
	cout << "\t0. SALIR" << endl;
}

int main()
{
	tm FechaFabric = { 0, 0, 0, 0, 0, 0 };

	tm FechaNac = { 0, 0, 0, 0, 0, 0 };
	tm FechaSolic = { 0, 0, 0, 0, 0, 0 };
	tm FechaEstimEntre = { 0, 0, 0, 0, 0, 0 };
	tm FechaEntre = { 0, 0, 0, 0, 0, 0 };

	//DEFINIMOS ALGUNOS PACIENTES DINAMICOS
	cPacientes* Nicolas = new cPacientes("Nicolas", "Rapp", "54782", "45545166", FechaNac, SinAlergia, "Hospital Favaloro", 12, true, true);
	cPacientes* Martina = new cPacientes("Martina", "Hanselmann", "32255", "00112233", FechaNac, Xenobiotico, "Hospital Favaloro", 22, false, true);
	cPacientes* Franco = new cPacientes("Franco", "Sorella", "782124", "33445566", FechaNac, Liquenoide, "Hospital Favaloro", 9, true, false);
	cPacientes* MartinS = new cPacientes("Martin", "Scorza", "8512656", "11223344", FechaNac, Xenobiotico, "Hospital Favalororo", 20, false, true);

	cPacientes* Nadie = new cPacientes("Nombre", "Apellido", "Telefono", "DNI", FechaNac, SinAlergia, "Hospital Asistente", 324, true, false);

	cPacientes* Camila = new cPacientes("Camila", "Zavidowski", "46725", "99887766", FechaNac, SinAlergia, "Hospital Aleman", 2, true, true);
	cPacientes* Mariano = new cPacientes("Mariano", "Bordeira", "275678", "77665544", FechaNac, Xenobiotico, "Hospital Aleman", 4, false, true);
	cPacientes* Stefan = new cPacientes("Stefan", "Napoletano", "78324", "55443322", FechaNac, Liquenoide, "Hospital Aleman", 6, true, false);
	cPacientes* Emilia = new cPacientes("Emilia", "Janin", "754575", "33221100", FechaNac, Xenobiotico, "Hospital Aleman", 8, false, true);

	cPacientes* Rodrigo = new cPacientes("Rodrigo", "Zavidowski", "85565678", "114023342", FechaNac, SinAlergia, "Hospital Italiano", 1, true, true);
	cPacientes* Federico = new cPacientes("Federico", "Fioriti", "457763", "98877766", FechaNac, Xenobiotico, "Hospital Italiano", 3, true, false);
	cPacientes* Mateo = new cPacientes("Mateo", "Espejo", "537575", "12233344", FechaNac, Liquenoide, "Hospital Italiano", 5, false, false);
	cPacientes* MariaD = new cPacientes("Maria", "Durand", "24585", "45566677", FechaNac, Carcinogenicos, "Hospital Italiano", 7, false, true);

	list <cPacientes*> PacientesFavaloro; //AGREGAMOS A LA LISTA A LOS PACIENTES CREADOS
	PacientesFavaloro.push_back (Nicolas);
	PacientesFavaloro.push_back(Martina);
	PacientesFavaloro.push_back(Franco);
	PacientesFavaloro.push_back(MartinS);

	list <cPacientes*> PacientesAleman; //AGREGAMOS A LA LISTA A LOS PACIENTES CREADOS
	PacientesAleman.push_back(Camila);
	PacientesAleman.push_back(Mariano);
	PacientesAleman.push_back(Stefan);
	PacientesAleman.push_back(Emilia);

	list <cPacientes*> PacientesItaliano; //AGREGAMOS A LA LISTA A LOS PACIENTES CREADOS
	PacientesItaliano.push_back(Rodrigo);
	PacientesItaliano.push_back(Federico);
	PacientesItaliano.push_back(Mateo);
	PacientesItaliano.push_back(MariaD);

	//DEFINIMOS ALGUNOS MEDICOS DINAMICOS
	cMedicos* MariaG = new cMedicos("Maria", "Gonzalez", "1188883333", "Matricula: M.P.202345", true);
	cMedicos* Manuel = new cMedicos("Manuel", "Martinez", "1123457896", "Matricula: M.P.346754", false);
	cMedicos* Ana = new cMedicos("Ana", "Gomez", "11345098", "Matricula: M.P.345689", true);
	cMedicos* Maximo = new cMedicos("Maximo", "Rapp", "11459821", "Matricula: M.P.457293", false);

	cMedicos* Delfina = new cMedicos("Delfina", "Hanisch", "012345", "Matricula: M.P.8877654", true);
	cMedicos* Bautista = new cMedicos("Bautista", "Rach", "56789", "Matricula: M.P.554631", false);
	cMedicos* Isabella = new cMedicos("Isabella", "Ferrari", "98765", "Matricula: M.P.148126", true);
	cMedicos* MartinB = new cMedicos("Martin", "Ballarino", "43210", "Matricula: M.P.78216", false);

	cMedicos* Laura = new cMedicos("Laura", "Gonzalez", "1188883333", "Matricula: M.P.202345", true);
	cMedicos* Renata = new cMedicos("Renata", "Stasi", "7853225", "Matricula: M.P.782652", false);
	cMedicos* Marcos = new cMedicos("Marcos", "Jurza", "4768135", "Matricula: M.P.5482235", true);
	cMedicos* Sol = new cMedicos("Sol", "Fitterman", "4545246", "Matricula: M.P.1542359", false);

	list <cMedicos*> MedicosFavaloro;
	MedicosFavaloro.push_back(MariaG);
	MedicosFavaloro.push_back(Manuel);
	MedicosFavaloro.push_back(Ana);
	MedicosFavaloro.push_back(Maximo);

	list <cMedicos*> MedicosAleman;
	MedicosAleman.push_back(Delfina);
	MedicosAleman.push_back(Bautista);
	MedicosAleman.push_back(Isabella);
	MedicosAleman.push_back(MartinB);

	list <cMedicos*> MedicosItaliano;
	MedicosItaliano.push_back(Laura);
	MedicosItaliano.push_back(Renata);
	MedicosItaliano.push_back(Marcos);
	MedicosItaliano.push_back(Sol);

	//DEFINIMOS ALGUNOS HOSPITALES DINÁMICOS
	list <cHospitales*> Hospitales;

	cHospitales* Favaloro = new cHospitales("Hospital Favaloro", "Libertador 123", MedicosFavaloro, PacientesFavaloro);
	cHospitales* Aleman = new cHospitales("Hospital Aleman", "Olleros 4567", MedicosAleman, PacientesAleman);
	cHospitales* Italiano = new cHospitales("Hospital Italiano", "Libertador 123", MedicosItaliano, PacientesItaliano);

	Hospitales.push_back(Favaloro);
	Hospitales.push_back(Aleman);
	Hospitales.push_back(Italiano);

	//DEFINIMOS ALGUNAS FABRICAS DINÁMICAS
	cFabricantes* Fabrica_BsAs = new cFabricantes("Fabrica Buenos Aires", "Aguilar 345", "Habilitado", true, "Requisitos: todo confirmado");
	cFabricantes* Fabrica_Catamarca = new cFabricantes("Fabrica Catamarca", "Cespedes 123", "No habilitado", true, "Requisitos: todo confirmado");
	cFabricantes* Fabrica_Merlo = new cFabricantes("Fabrica Merlo", "Olleros 456", "Habilitado", false, "Requisitos: todo confirmado");

	//DEFINIMOS ALGUNAS PIEZAS ORTOPEDICAS DINÁMICAS
	list <cPiezasOrtopedicas*> Piezitas_BuenosAires; //PIEZAS ORTOPEDICAS BUENOS AIRES
	cPiezasOrtopedicas* PiezitaBsAs1 = new cPiezasOrtopedicas(2, Ceramica, FechaFabric, Fabrica_BsAs, SuperiorDerecho, "XQRW456");
	cPiezasOrtopedicas* PiezitaBsAs2 = new cPiezasOrtopedicas(4, Titanio, FechaFabric, Fabrica_BsAs, InferiorIzquierda, "DFY645");
	cPiezasOrtopedicas* PiezitaBsAs3 = new cPiezasOrtopedicas(6, Cromo, FechaFabric, Fabrica_BsAs, InferiorDerecha, "W38IF5");
	cPiezasOrtopedicas* PiezitaBsAs4 = new cPiezasOrtopedicas(8, Polietileno, FechaFabric, Fabrica_BsAs, SuperiorIzquierdo, "SD3G95");

	Piezitas_BuenosAires.push_back(PiezitaBsAs1);
	Piezitas_BuenosAires.push_back(PiezitaBsAs2);
	Piezitas_BuenosAires.push_back(PiezitaBsAs3);
	Piezitas_BuenosAires.push_back(PiezitaBsAs4);

	list <cPiezasOrtopedicas*> Piezitas_Catamarca; //PIEZAS ORTOPEDICAS CATAMARCA
	cPiezasOrtopedicas* PiezitaCatamarca1 = new cPiezasOrtopedicas(10, Ceramica, FechaFabric, Fabrica_Catamarca, SuperiorDerecho, "FSFG548");
	cPiezasOrtopedicas* PiezitaCatamarca2 = new cPiezasOrtopedicas(12, Titanio, FechaFabric, Fabrica_Catamarca, InferiorIzquierda, "GHFJS495");
	cPiezasOrtopedicas* PiezitaCatamarca3 = new cPiezasOrtopedicas(14, Cromo, FechaFabric, Fabrica_Catamarca, InferiorDerecha, "GRGMSFD457");
	cPiezasOrtopedicas* PiezitaCatamarca4 = new cPiezasOrtopedicas(16, Polietileno, FechaFabric, Fabrica_Catamarca, SuperiorIzquierdo, "AEJGEZ876");

	Piezitas_Catamarca.push_back(PiezitaCatamarca1);
	Piezitas_Catamarca.push_back(PiezitaCatamarca2);
	Piezitas_Catamarca.push_back(PiezitaCatamarca3);
	Piezitas_Catamarca.push_back(PiezitaCatamarca4);

	list <cPiezasOrtopedicas*> Piezitas_Merlo; //PIEZAS ORTOPEDICAS MERLO
	cPiezasOrtopedicas* PiezitaMerlo1 = new cPiezasOrtopedicas(18, Ceramica, FechaFabric, Fabrica_Merlo, SuperiorDerecho, "FGG3554");
	cPiezasOrtopedicas* PiezitaMerlo2 = new cPiezasOrtopedicas(20, Titanio, FechaFabric, Fabrica_Merlo, InferiorIzquierda, "DFERH64");
	cPiezasOrtopedicas* PiezitaMerlo3 = new cPiezasOrtopedicas(22, Cromo, FechaFabric, Fabrica_Merlo, InferiorDerecha, "JYDFGW46");
	cPiezasOrtopedicas* PiezitaMerlo4 = new cPiezasOrtopedicas(24, Polietileno, FechaFabric, Fabrica_Merlo, SuperiorIzquierdo, "254RY56");

	Piezitas_Merlo.push_back(PiezitaMerlo1);
	Piezitas_Merlo.push_back(PiezitaMerlo2);
	Piezitas_Merlo.push_back(PiezitaMerlo3);
	Piezitas_Merlo.push_back(PiezitaMerlo4);

	//DEFINIMOS ALGUNOS REGISTROS DINAMICAS
	cRegistros* Registro1 = new cRegistros(Italiano, Laura, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaBsAs1, Rodrigo);
	cRegistros* Registro2 = new cRegistros(Italiano, Renata, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaCatamarca2, MariaD);
	cRegistros* Registro3 = new cRegistros(Italiano, Sol, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaMerlo3, Mateo);
	cRegistros* Registro4 = new cRegistros(Italiano, Marcos, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaBsAs4, Federico);
	cRegistros* Registro5 = new cRegistros(Favaloro, Manuel, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaCatamarca3, Nicolas);
	cRegistros* Registro6 = new cRegistros(Italiano, Maximo, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaMerlo4, Martina);
	cRegistros* Registro7 = new cRegistros(Italiano, Ana, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaBsAs2, Franco);

	list <cRegistros*> Register;
	Register.push_back(Registro1);
	Register.push_back(Registro2);
	Register.push_back(Registro3);
	Register.push_back(Registro4);
	Register.push_back(Registro5);
	Register.push_back(Registro6);
	
	//DEFINIMOS ALGUNAS ORTOPEDIAS DINAMICAS
	cOrtopedias* Ortopedia_BsAs = new cOrtopedias("Ortopedia Buenos Aires", "Manuel Ugarte 354", Piezitas_BuenosAires, 0);
	cOrtopedias* Ortopedia_Catamarca = new cOrtopedias("Ortopedia Catamarca", "Manuel Ugarte 354", Piezitas_Catamarca, 3456);
	cOrtopedias* Ortopedia_Merlo = new cOrtopedias("Ortopedia Merlo", "Manuel Ugarte 354", Piezitas_Merlo, 3456);

	list <cOrtopedias*> Ortopedias;
	Ortopedias.push_back(Ortopedia_BsAs);
	Ortopedias.push_back(Ortopedia_Catamarca);
	Ortopedias.push_back(Ortopedia_Merlo);

	//RESTO
	//no hace falta simular las clases cAsociacion ni cPersona
	//Simulacion

	cANPA PAMPA(Register, "Solicitud Especial", Ortopedias, Hospitales);

	cQuirurgicas Quirur(25, Cobalto, FechaFabric, Fabrica_BsAs, InferiorDerecha, "ZZ1234");

	cNoQuirurgicas NoQuirur(12, Polietileno, FechaFabric, Fabrica_BsAs, SuperiorIzquierdo, "AAA342", 230);


	string entreg = "", solic = "", buschosp = "", nombrehosp = "";

	int opcion = 0, opcion0 = 0, opcion2 = 0, opcion4 = 0, opcion5 = 0;
	bool regresar = true, regresar2 = true, regresar3 = true;
	bool salir = true;
	TipoProtesis protes = SuperiorDerecho;
	TipoProtesis protesis2 = InferiorDerecha;
	TipoProtesis protesis3 = InferiorIzquierda;

	Menu_Principal();
	do
	{
		cout << "\tIngrese una Opcion del Menu Principal: ";
		cin >> opcion;

		switch (opcion)
		{
		case(1):
			try
			{
				PAMPA.Agregar_Paciente(Nadie->Imprimir_Preguntas_Agregar_Paciente(), Favaloro);
			}
			catch (exception* e)
			{
				cout << e->what() << endl;
				delete e;
			}
			Menu_Principal();
			break;

		case(2):
			system("cls");

				cout << "\n\n\t\t\tMENU TIPO PROTESIS" << endl;
				cout << "\t\t\t--------------" << endl;
				cout << "\t1. Busco una protesis de la parte Superior Izquierda." << endl;
				cout << "\t2. Busco una protesis de la parte Superior Derecha." << endl;
				cout << "\t3. Busco una protesis de la parte Inferior Izquierda." << endl;
				cout << "\t4. Busco una protesis de la parte Inferior Derecha." << endl;
				cout << "\t0. REGRESAR" << endl;

			do
			{
				cout << "\tIngrese una Opcion del Menu Tipo Protesis: ";
				cin >> opcion2;

				switch (opcion2)
				{
				case(1):
					protes = SuperiorIzquierdo; //Superior Izquierda
					PAMPA.Buscar_Paciente_porpiezas(protes);
					break;

				case(2):
					protes = SuperiorDerecho; //Superior Derecha
					PAMPA.Buscar_Paciente_porpiezas(protes);
					break;

				case(3):
					protes = InferiorIzquierda; //Inferior Izquierda
					PAMPA.Buscar_Paciente_porpiezas(protes);
					break;

				case(4):
					protes = InferiorDerecha; //Inferior Derecha
					PAMPA.Buscar_Paciente_porpiezas(protes);
					break;

				case(0):
					system("cls");
					regresar = false;
					Menu_Principal();
					break;
				}

			} while (regresar);
			break;

		case(3):
			system("cls");

			cout << endl << "\n\n\t\t\tHOSPITAL INGRESADO: " << endl;
			cout << "\t\t\t--------------" << endl;
			cout << "\t1. Mi paciente se atiende en el Hospital Favaloro." << endl;
			cout << "\t2. Mi paciente se atiende en el Hospital Aleman." << endl;
			cout << "\t3. Mi paciente se atiende en el Hospital Italiano." << endl;

			cout << "\tIngrese una Opcion: ";
			cin >> opcion0;

			switch (opcion0)
			{
			case(1):
				nombrehosp = "Hospital Favaloro"; //Hospital Favaloro
				break;

			case(2):
				nombrehosp = "Hospital Aleman"; //Hospital Aleman
				break;

			case(3):
				nombrehosp = "Hospital Italiano"; //Hospital Italiano
				break;
			}
			
			PAMPA.Buscar_Paciente_porhospi(nombrehosp);
			Menu_Principal();
			break;

		case(4):
			system("cls");

				cout << "\n\n\t\t\tMENU TIPO PROTESIS" << endl;
				cout << "\t\t\t--------------" << endl;
				cout << "\t1. El paciente quiere una protesis de la parte Superior Izquierda." << endl;
				cout << "\t2. El paciente quiere una protesis de la parte Superior Derecha." << endl;
				cout << "\t3. El paciente quiere una protesis de la parte Inferior Izquierda." << endl;
				cout << "\t4. El paciente quiere una protesis de la parte Inferior Derecha." << endl;
				cout << "\t0. REGRESAR" << endl;

			do
			{
				cout << "\tIngrese una Opcion del Menu Tipo Protesis: ";
				cin >> opcion4;

				switch (opcion4)
				{
				case(1):
					protesis2 = SuperiorIzquierdo; //Superior Izquierda
					PAMPA.Buscar_Protesis(protesis2);
					break;

				case(2):
					protesis2 = SuperiorDerecho; //Superior Derecha
					PAMPA.Buscar_Protesis(protesis2);
					break;

				case(3):
					protesis2 = InferiorIzquierda; //Inferior Izquierda
					PAMPA.Buscar_Protesis(protesis2);
					break;

				case(4):
					protesis2 = InferiorDerecha; //Inferior Derecha
					PAMPA.Buscar_Protesis(protesis2);
					break;

				case(0):
					system("cls");
					regresar2 = false;
					Menu_Principal();
					break;
				}
			} while (regresar2);

		break;

		case(5):
			system("cls");

			cout << "\n\n\t\t\tMENU TIPO PROTESIS" << endl;
			cout << "\t\t\t--------------" << endl;
			cout << "\t1. Quiero solicitar una protesis de la parte Superior Izquierda." << endl;
			cout << "\t2. Quiero solicitar una protesis de la parte Superior Derecha." << endl;
			cout << "\t3. Quiero solicitar una protesis de la parte Inferior Izquierda." << endl;
			cout << "\t4. Quiero solicitar una protesis de la parte Inferior Derecha." << endl;
			cout << "\t0. REGRESAR" << endl;

			do
			{
				cout << "\tIngrese una Opcion del Menu Tipo Protesis: ";
				cin >> opcion5;

				switch (opcion5)
				{
				case(1):
					protesis3 = SuperiorIzquierdo; //Superior Izquierda
					solic = Favaloro->Solicitar_Protesis(Ortopedia_BsAs, Fabrica_BsAs, protesis3) ? "Se solicito la protesis de manera correcta." : "El fabricante no acepto la solicitud de la protesis.";
					cout << solic << endl;	
					break;

				case(2):
					protesis3 = SuperiorDerecho; //Superior Derecha
					solic = Favaloro->Solicitar_Protesis(Ortopedia_BsAs, Fabrica_BsAs, protesis3) ? "Se solicito la protesis de manera correcta." : "El fabricante no acepto la solicitud de la protesis.";
					cout << solic << endl;
					break;

				case(3):
					protesis3 = InferiorIzquierda; //Inferior Izquierda
					solic = Favaloro->Solicitar_Protesis(Ortopedia_BsAs, Fabrica_BsAs, protesis3) ? "Se solicito la protesis de manera correcta." : "El fabricante no acepto la solicitud de la protesis.";
					cout << solic << endl;
					break;

				case(4):
					protesis3 = InferiorDerecha; //Inferior Derecha
					solic = Favaloro->Solicitar_Protesis(Ortopedia_BsAs, Fabrica_BsAs, protesis3) ? "Se solicito la protesis de manera correcta." : "El fabricante no acepto la solicitud de la protesis.";
					cout << solic << endl;
					break;

				case(0):
					system("cls");
					regresar3 = false;
					Menu_Principal();
					break;
				}
			} while (regresar3);
			break;

		case(6):
			entreg = Registro2->Diferencia_Entrega() ? "La protesis se entrego a tiempo." : "La protesis se entregó tarde."; //Uso el operador ternario para que me diga si se entrega a tiempo.
			cout << entreg << endl;
			break;

		case(7):
			try
			{
				PAMPA + Registro3;
				PAMPA + Registro7;
			}
			catch (exception* ex)
			{
				cout << ex->what() << endl;
				delete ex;
			}
			PAMPA - Registro1;
			cout << PAMPA << endl;
			break;

		case(0):
			salir = false;
			break;
		}

	} while (salir);

	//BORRAMOS LAS LISTAS DINÁMICAS DE LOS PACIENTES
		//list<cPacientes*>::iterator it;
	for (list<cPacientes*>::iterator it = PacientesAleman.begin(); it != PacientesAleman.end(); it++)
	{
		delete* it;
	}
	PacientesAleman.clear();

	for (list<cPacientes*>::iterator it = PacientesFavaloro.begin(); it != PacientesFavaloro.end(); it++)
	{
		delete* it;
	}
	PacientesFavaloro.clear();

	for (list<cPacientes*>::iterator it = PacientesItaliano.begin(); it != PacientesItaliano.end(); it++)
	{
		delete* it;
	}
	PacientesItaliano.clear();

	//BORRAMOS LAS LISTAS DINÁMICAS DE LOS MÉDICOS
	for (list<cMedicos*>::iterator it = MedicosAleman.begin(); it != MedicosAleman.end(); it++)
	{
		delete* it;
	}
	MedicosAleman.clear();

	for (list<cMedicos*>::iterator it = MedicosFavaloro.begin(); it != MedicosFavaloro.end(); it++)
	{
		delete* it;
	}
	MedicosFavaloro.clear();

	for (list<cMedicos*>::iterator it = MedicosItaliano.begin(); it != MedicosItaliano.end(); it++)
	{
		delete* it;
	}
	MedicosItaliano.clear();

	//BORRAMOS LAS LISTAS DE HOSPITALES
	for (list<cHospitales*>::iterator it = Hospitales.begin(); it != Hospitales.end(); it++)
	{
		delete* it;
	}
	Hospitales.clear();

	//BORRAMOS LAS LISTAS DE PIEZAS ORTOPEDICAS
	for (list<cPiezasOrtopedicas*>::iterator it = Piezitas_BuenosAires.begin(); it != Piezitas_BuenosAires.end(); it++)
	{
		delete* it;
	}
	Piezitas_BuenosAires.clear();

	for (list<cPiezasOrtopedicas*>::iterator it = Piezitas_Catamarca.begin(); it != Piezitas_Catamarca.end(); it++)
	{
		delete* it;
	}
	Piezitas_Catamarca.clear();

	for (list<cPiezasOrtopedicas*>::iterator it = Piezitas_Merlo.begin(); it != Piezitas_Merlo.end(); it++)
	{
		delete* it;
	}
	Piezitas_Merlo.clear();

	//BORRAMOS LAS LISTAS DE REGISTROS
	for (list<cRegistros*>::iterator it = Register.begin(); it != Register.end(); it++)
	{
		delete* it;
	}
	Register.clear();

	//BORRAMOS LAS LISTAS DE ORTOPEDIAS
	for (list<cOrtopedias*>::iterator it = Ortopedias.begin(); it != Ortopedias.end(); it++)
	{
		delete* it;
	}
	Ortopedias.clear();

	/*delete[] Fabrica_BsAs;
	delete [] Fabrica_Catamarca;
	delete [] Fabrica_Merlo;*/
	
	return 0;
}
