#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

#include "cANPA.h"
#include "cAsociacion.h"
#include "cPiezasOrtopedicas.h"
#include "cPersona.h"

int main()
{
	list <cMedicos> Medicos;
	list <cPacientes> Pacientes;
	list <cOrtopedias> Ortopedias;
	list <cPiezasOrtopedicas> PiezitasOrtopedicas;

	time_t FechaFabric;
	time_t FechaNac;
	time_t FechaSolic;
	time_t FechaEstimEntre;
	time_t FechaEntre;
	
	//no hace falta simular las clases cAsociacion ni cPersona
	//Simulacion
	cFabricantes Fabrica("Fabri Protesis", "Aguilar 345", "Habilitado", false, "Requisitos: todo confirmado");
	cMedicos Laurita("Laura", "Gonzalez", "1188883333", "Matricula: M.P.202345", true);
	cHospitales Hospi("Hospital Italiano", "Libertador 123", Medicos, Pacientes);
	cPiezasOrtopedicas PiezitaOrtoped(354, Ceramica, FechaFabric, "Fabri Protesis");
	cPacientes Rodrigo("Rodrigo", "Zavidowski", "114023342", FechaNac, SinAlergia, Hospi, 324, true, false);
	cANPA PAMPITA(Hospi, Laurita, FechaSolic, FechaEstimEntre, FechaEntre, PiezitaOrtoped, Rodrigo, "Solicitud Especial", Ortopedias);
	cOrtopedias Ortoped("Ortopedita", "Manuel Ugarte 354", PiezitasOrtopedicas, 3456);
	cQuirurgicas Quirur(25, Cobalto, FechaFabric, Fabrica, InferiorDerecha);
	cNoQuirurgicas(12, Polietileno, FechaFabric, Fabrica, 230, SuperiorIzquierdo);

}
