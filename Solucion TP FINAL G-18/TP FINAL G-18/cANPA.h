#ifndef _CANPA_H
#define _CANPA_H

#include "cRegistros.h"

class cANPA
{
private:
	list <cRegistros> Registro;
	string SolicitudEspecial;
	list <cOrtopedias> Ortopedia;

public:
	cANPA(list <cRegistros> Registro_, string SolicitudEspecial_, list <cOrtopedias> Ortopedia_);

	~cANPA();

	list <cRegistros> get_Registro();
	string get_SolicitudEspecial();
	list <cOrtopedias> get_Ortopedia();

	void set_Registro(list <cRegistros> NuevoEstado);
	void set_SolicitudEspecial(string NuevoEstado);
	void set_Ortopedia(list <cOrtopedias> NuevoEstado);

	list<cPacientes> Buscar_Paciente(cHospitales hospi, cPiezasOrtopedicas);
	bool Buscar_Protesis(cPacientes, cPiezasOrtopedicas);
	bool Diferencia_Entrega(tm solicitud, tm entregada); //usar operador ternario en el main

};

#endif //_CANPA_H