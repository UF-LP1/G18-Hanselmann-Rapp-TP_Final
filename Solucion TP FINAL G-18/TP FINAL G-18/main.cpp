#include "cANPA.h"
#include "cOrtopedias.h"
#include "cPersona.h"
#include "cQuirurgicas.h"
#include "cNoQuirurgicas.h"
#include "main.h"

void Menu_Principal()
{
	cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
	cout << "\t\t\t--------------" << endl;
	cout << "\t1. Quiero agregar un paciente en el hospital." << endl;
	cout << "\t2. Quiero saber que pacientes usan esta protesis: " << endl;
	cout << "\t3. Quiero saber que pacientes tienen protesis segun el hospital: " << endl;
	cout << "\t4. Quiero buscar una protesis." << endl;
	cout << "\t5. Quiero solicitar una protesis." << endl;
	cout << "\t6. La protesis fue entregada a tiempo?" << endl;
	cout << "\t0. SALIR" << endl;
}

/*void Menu_TIPOPROTESIS()
{
	TipoProtesis protes ;
	int opcion = 0;
	bool regresar = true;

	system("cls");

	do
	{
		cout << "\n\n\t\t\tMENU TIPO PROTESIS" << endl;
		cout << "\t\t\t--------------" << endl;
		cout << "\t1. Busco una protesis de la parte Superior Izquierda." << endl;
		cout << "\t2. Busco una protesis de la parte Superior Derecha." << endl;
		cout << "\t3. Busco una protesis de la parte Inferior Izquierda." << endl;
		cout << "\t4. Busco una protesis de la parte Inferior Derecha." << endl;
		cout << "\t0. SALIR" << endl;

		cout << "\tIngrese una Opcion: ";
		cin >> opcion;

		switch (opcion)
		{
		case(1):
			protes == 0; //Superior Izquierda

			break;

		case(2):
			protes == 1; //Superior Derecha
			break;

		case(3):
			protes == 2; //Inferior Izquierda
			break;

		case(0):
			system("cls");
			regresar = false;
			Menu_Principal();
			break;
		}

	} while (regresar);
}*/

int main()
{
	list <cMedicos> Medicos;
	list <cPacientes> Pacientes;
	list <cOrtopedias> Ortopedias;
	list <cPiezasOrtopedicas> PiezitasOrtopedicas;
	list <cRegistros> Register;
	list <cHospitales> Hospitales;

	time_t FechaFabric = 0;
	tm FechaNac = { 0, 0, 0, 0, 0, 0 };
	tm FechaSolic = {0, 0, 0, 0, 0, 0};
	tm FechaEstimEntre = { 0, 0, 0, 0, 0, 0 };
	tm FechaEntre = { 0, 0, 0, 0, 0, 0 };
	
	//no hace falta simular las clases cAsociacion ni cPersona
	//Simulacion
	cFabricantes* Fabrica = new cFabricantes("Fabri Protesis", "Aguilar 345", "Habilitado", false, "Requisitos: todo confirmado");
	cFabricantes Fabrica2 ("Fabri Protesis", "Aguilar 345", "Habilitado", false, "Requisitos: todo confirmado");
	cMedicos* Laurita = new cMedicos("Laura", "Gonzalez", "1188883333", "Matricula: M.P.202345", true);
	cHospitales* Hospi = new cHospitales("Hospital Italiano", "Libertador 123", Medicos, Pacientes);
	cHospitales Hospi2 ("Hospital Italiano", "Libertador 123", Medicos, Pacientes);
	cPiezasOrtopedicas* PiezitaOrtoped = new cPiezasOrtopedicas(354, Ceramica, FechaFabric, Fabrica, SuperiorDerecho, "XQRW456");
	cPacientes* Rodrigo = new cPacientes("Rodrigo", "Zavidowski", "114023342", FechaNac, SinAlergia, "Hospital Italiano", 324, true, false);
	cRegistros* Registro = new cRegistros(Hospi, Laurita, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaOrtoped, Rodrigo);
	cANPA PAMPA(Register, "Solicitud Especial", Ortopedias, Hospitales);
	cOrtopedias Ortoped("Ortopedita", "Manuel Ugarte 354", PiezitasOrtopedicas, 3456);
	cQuirurgicas Quirur(25, Cobalto, FechaFabric, Fabrica, InferiorDerecha, "ZZ1234");
	cNoQuirurgicas NoQuirur(12, Polietileno, FechaFabric, Fabrica, SuperiorIzquierdo, "AAA342", 230);

	cPacientes Martin ("Martin", "Scorza", "11223344", FechaNac, Xenobiotico, "Hospital Favalororo", 20, false, true);

	string entreg = "", solic = "";

	int opcion = 0;
	bool regresar = true;
	bool salir = true;


	Menu_Principal();
	do
	{
		cout << "\tIngrese una Opcion del Menu Principal: ";
		cin >> opcion;

		switch (opcion)
		{
		case(1):
			Martin.Imprimir_Preguntas_Agregar_Paciente();
			break;

		case(2):
			TipoProtesis protes;
			int opcion2 = 0;
			bool regresar = true;

			system("cls");

			do
			{
				cout << "\n\n\t\t\tMENU TIPO PROTESIS" << endl;
				cout << "\t\t\t--------------" << endl;
				cout << "\t1. Busco una protesis de la parte Superior Izquierda." << endl;
				cout << "\t2. Busco una protesis de la parte Superior Derecha." << endl;
				cout << "\t3. Busco una protesis de la parte Inferior Izquierda." << endl;
				cout << "\t4. Busco una protesis de la parte Inferior Derecha." << endl;
				cout << "\t0. SALIR" << endl;

				cout << "\tIngrese una Opcion: ";
				cin >> opcion2;

				switch (opcion2)
				{
				case(1):
					protes == 0; //Superior Izquierda
					PAMPA.Buscar_Paciente_porpiezas(Registro, protes);
					break;

				case(2):
					protes == 1; //Superior Derecha
					PAMPA.Buscar_Paciente_porpiezas(Registro, protes);
					break;

				case(3):
					protes == 2; //Inferior Izquierda
					PAMPA.Buscar_Paciente_porpiezas(Registro, protes);
					break;

				case(4):
					protes == 3; //Inferior Derecha
					PAMPA.Buscar_Paciente_porpiezas(Registro, protes);
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
			break;

		case(4):
			break;

		case(5):
			solic = Hospi2.Solicitar_Protesis(Ortoped, Fabrica2) ? "Se solicitó la protesis de manera correcta." : "El fabricante no acepto la solicitud de la protesis.";
			cout << solic << endl;
			break;

		case(6):
			
			entreg = Registro.Diferencia_Entrega() ? "La protesis se entrego a tiempo." : "La protesis se entregó tarde."; //Uso el operador ternario para que me diga si se entrega a tiempo.
			cout << entreg << endl;
			break;

		case(0):
			salir = false;
			break;
		}

	} while (salir);
	
}
