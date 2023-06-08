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
	list <cRegistros> Register;

	time_t FechaFabric = 0;
	tm FechaNac = { 0, 0, 0, 0, 0, 0 };
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
	cRegistros Registro(Hospi, Laurita, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaOrtoped, Rodrigo);
	cANPA PAMPA(Register, "Solicitud Especial", Ortopedias);
	cOrtopedias Ortoped("Ortopedita", "Manuel Ugarte 354", PiezitasOrtopedicas, 3456);
	cQuirurgicas Quirur(25, Cobalto, FechaFabric, Fabrica, InferiorDerecha);
	cNoQuirurgicas NoQuirur(12, Polietileno, FechaFabric, Fabrica, 230, SuperiorIzquierdo);

	cPacientes Martin ("Martin", "Scorza", "11223344", FechaNac, Xenobiotico, "Hospital Favalororo", 20, false, true);

	string entreg = "";

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
			break;

		case(3):
			break;

		case(4):
			break;

		case(5):
			
			entreg = Registro.Diferencia_Entrega() ? "La protesis se entrego a tiempo." : "La protesis se entregó tarde."; //Uso el operador ternario para que me diga si se entrega a tiempo.
			cout << entreg << endl;
			break;

		case(0):
			salir = false;
			break;
		}

	} while (salir);
	
}
