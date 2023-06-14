#ifndef _CANPA_H
#define _CANPA_H

#include "cRegistros.h"

class cANPA
{
private:
	list <cRegistros> Registro;
	string SolicitudEspecial;
	list <cOrtopedias> Ortopedia;
	list<cHospitales> hospit;

public:
	cANPA(list <cRegistros> Registro_, string SolicitudEspecial_, list <cOrtopedias> Ortopedia_, list<cHospitales>hospit_);

	~cANPA();

	list <cRegistros> get_Registro();
	string get_SolicitudEspecial();
	list <cOrtopedias> get_Ortopedia();
	list<cHospitales> get_hospi();

	void set_Registro(list <cRegistros> NuevoEstado);
	void set_SolicitudEspecial(string NuevoEstado);
	void set_Ortopedia(list <cOrtopedias> NuevoEstado);
	void set_hospi(list<cHospitales>NuevoEstado);


	bool Buscar_Protesis(cPacientes, cPiezasOrtopedicas);
	list<cPacientes> Buscar_Paciente_porhospi(string hospi);
	list <cPacientes> Buscar_Paciente_porpiezas(cRegistros* regis, TipoProtesis piezabuscada);
	
};

ostream& operator<<(ostream& out, cANPA& anpa);

#endif //_CANPA_H