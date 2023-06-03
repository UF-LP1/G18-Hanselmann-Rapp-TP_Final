#ifndef _CHOSPITALES_H
#define _CHOSPITALES_H

#include "cAsociacion.h"
#include "cMedicos.h"
#include "cPacientes.h"
#include "cOrtopedias.h"

#include <list>

class cHospitales: public cAsociacion
{
private:
	std::list <cMedicos> Medicos;
	std::list <cPacientes> Pacientes;

public:
	cHospitales(string Nombre_, string Direccion_, std::list <cMedicos> Medicos_, std::list <cPacientes> Pacientes_);
	~cHospitales();

	std::list <cMedicos> get_Medicos();
	std::list <cPacientes> get_Pacientes();

	void set_Medicos(list <cMedicos> NuevoEstado);
	void set_Pacientes(list <cPacientes> NuevoEstado);

	bool Agregar_Paciente(cPacientes pac);
	bool Solicitar_Protesis(cOrtopedias ortop, cFabricantes fab);
	void Imprimir_Pacientes();

};

#endif //_CHOSPITALES_H