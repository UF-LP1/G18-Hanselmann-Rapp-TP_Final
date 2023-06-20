#ifndef _CHOSPITALES_H
#define _CHOSPITALES_H

#include "cAsociacion.h"
#include "cMedicos.h"
#include "cPersona.h"
#include "cPacientes.h"
#include "cOrtopedias.h"

class cHospitales: public cAsociacion
{
private:
	list <cMedicos*> Medicos;
	list <cPacientes*> Pacientes;

public:
	cHospitales(string Nombre_, string Direccion_, list <cMedicos*> Medicos_, list <cPacientes*> Pacientes_);
	~cHospitales();

	list <cMedicos*> get_Medicos();
	list <cPacientes*> get_Pacientes();

	void set_Medicos(list <cMedicos*> NuevoEstado);
	void set_Pacientes(list <cPacientes*> NuevoEstado);

	bool Solicitar_Protesis(cOrtopedias ortop, cFabricantes fab);
	void Imprimir_Pacientes();

};

#endif //_CHOSPITALES_H