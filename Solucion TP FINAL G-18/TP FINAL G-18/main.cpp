#include "cANPA.h"
#include "cOrtopedias.h"
#include "cPersona.h"
#include "cQuirurgicas.h"
#include "cNoQuirurgicas.h"

void Menu_Principal()
{
	cout << "\n\n\t\t\tMENU PRINCIPAL" << endl;
	cout << "\t\t\t--------------" << endl;
	cout << "\t1. Quiero agregar un paciente en el hospital." << endl;
	cout << "\t2. Quiero buscar un Paciente que ya tiene Protesis." << endl;
	cout << "\t3. Quiero buscar una protesis." << endl;
	cout << "\t4. Quiero solicitar una protesis." << endl;
	cout << "\t5. La protesis fue entregada a tiempo?" << endl;
	cout << "\t0. SALIR" << endl;
}

int main()
{
	list <cMedicos> Medicos;
	list <cPacientes> Pacientes;
	list <cOrtopedias> Ortopedias;
	list <cPiezasOrtopedicas> PiezitasOrtopedicas;

	time_t FechaFabric = 0;
	time_t FechaNac = 0;
	tm FechaSolic = {0, 0, 0, 0, 0, 0};
	tm FechaEstimEntre = { 0, 0, 0, 0, 0, 0 };
	tm FechaEntre = { 0, 0, 0, 0, 0, 0 };
	
	//no hace falta simular las clases cAsociacion ni cPersona
	//Simulacion
	cFabricantes* Fabrica = new cFabricantes("Fabri Protesis", "Aguilar 345", "Habilitado", false, "Requisitos: todo confirmado");
	cMedicos* Laurita = new cMedicos("Laura", "Gonzalez", "1188883333", "Matricula: M.P.202345", true);
	cHospitales* Hospi = new cHospitales("Hospital Italiano", "Libertador 123", Medicos, Pacientes);
	cPiezasOrtopedicas* PiezitaOrtoped = new cPiezasOrtopedicas(354, Ceramica, FechaFabric, Fabrica);
	cPacientes* Rodrigo = new cPacientes("Rodrigo", "Zavidowski", "114023342", FechaNac, SinAlergia, "Hospital Italiano", 324, true, false);
	cANPA PAMPA(Hospi, Laurita, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaOrtoped, Rodrigo, "Solicitud Especial", Ortopedias);
	cOrtopedias Ortoped("Ortopedita", "Manuel Ugarte 354", PiezitasOrtopedicas, 3456);
	cQuirurgicas Quirur(25, Cobalto, FechaFabric, Fabrica, InferiorDerecha);
	cNoQuirurgicas NoQuirur(12, Polietileno, FechaFabric, Fabrica, 230, SuperiorIzquierdo);

	string entreg = "";

	int opcion = 0, hora_sol = 0, dia_sol = 0, mes_sol = 0, anio_sol = 0, hora_ent = 0, dia_ent = 0, mes_ent = 0, anio_ent = 0;
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
			break;

		case(2):
			break;

		case(3):
			break;

		case(4):
			break;

		case(5):
			cout << "\tIngrese la hora en la que hizo la solicitud de la protesis: ";
			cin >> hora_sol;
			cout << "\tIngrese el dia en el que hizo la solicitud de la protesis: ";
			cin >> dia_sol;
			cout << "\tIngrese el mes en el que hizo la solicitud de la protesis: ";
			cin >> mes_sol;
			cout << "\tIngrese el anio en el que hizo la solicitud de la protesis: ";
			cin >> anio_sol;
			cout << "\tIngrese la hora en la que fue entregada de la protesis: ";
			cin >> hora_ent;
			cout << "\tIngrese el dia en el que fue entregada de la protesis: ";
			cin >> dia_ent;
			cout << "\tIngrese el mes en el que fue entregada de la protesis: ";
			cin >> mes_ent;
			cout << "\tIngrese el anio en el que fue entregada de la protesis: ";
			cin >> anio_ent;

			FechaSolic = { 0, 0, hora_sol, dia_sol, mes_sol, anio_sol };
			FechaEntre = { 0, 0, hora_ent, dia_ent, mes_ent, anio_ent };

			entreg = PAMPA.Diferencia_Entrega(FechaSolic, FechaEntre) ? "Se entrego a tiempo la Protesis" : "Se entrego tarde la Protesis"; //Uso el operador ternario para que me diga si se entrega a tiempo.
			cout << entreg << endl;
			break;

		case(0):
			salir = false;
			break;
		}

	} while (salir);
	
}
