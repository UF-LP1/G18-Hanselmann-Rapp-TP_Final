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
	cAsociacion aso("Lola", "Aguilar 345");

	cPersona("Florencia", "Aguirre", "1145566767");

	cFabricantes fabri("FabriProtesis", "Aguilar 345", "2346-gh", false, "todo verificado");

	cMedicos medic("Laura", "Gonzalez", "1188883333", "M.P.202345", true);

	//cOrtopedias

	//cHospitales hospi("Zabala", "Libertador 123", "Manuel", "Jorge");

	//cPiezasOrtopedicas ortop(354, "Ceramica", time_t , cFabricantes, 150);

	//cPacientes 

	//cQuirurgicas

	//cNoQuirurgicas

	//cANPA

}
