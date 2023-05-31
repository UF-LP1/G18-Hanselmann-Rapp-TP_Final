#ifndef _CHOSPITALES_H
#define _CHOSPITALES_H

#include "cAsociacion.h"
#include "cPersona.h"
#include "cOrtopedias.h"

class cHospitales: public cAsociacion
{
private:
	list <cMedicos> Medicos;
	list <cPacientes> Pacientes;

public:
	list <cMedicos> get_Medicos();
	list <cPacientes> get_Pacientes();

	void set_Medicos(list <cMedicos> NuevoEstado);
	void set_Pacientes(list <cPacientes> NuevoEstado);

	bool Agregar_Paciente(cPacientes);
	bool Solicitar_Protesis(cOrtopedias, cFabricantes);
	void Imprimir_Pacientes();

};

#endif //_CHOSPITALES_H