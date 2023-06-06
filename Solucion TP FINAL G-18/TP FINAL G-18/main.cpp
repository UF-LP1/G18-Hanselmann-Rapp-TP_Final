#include "cANPA.h"
#include "cOrtopedias.h"
#include "cPersona.h"
#include "cQuirurgicas.h"
#include "cNoQuirurgicas.h"

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
	cANPA PAMPITA(Hospi, Laurita, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaOrtoped, Rodrigo, "Solicitud Especial", Ortopedias);
	cOrtopedias Ortoped("Ortopedita", "Manuel Ugarte 354", PiezitasOrtopedicas, 3456);
	cQuirurgicas Quirur(25, Cobalto, FechaFabric, Fabrica, InferiorDerecha);
	cNoQuirurgicas NoQuirur(12, Polietileno, FechaFabric, Fabrica, 230, SuperiorIzquierdo);


}
