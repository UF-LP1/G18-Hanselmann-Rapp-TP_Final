#ifndef _CORTOPEDIAS_H
#define _CORTOPEDIAS_H

#include "cAsociacion.h"
#include "cPiezasOrtopedicas.h"

class cOrtopedias: public cAsociacion
{
private:
	list <cPiezasOrtopedicas> Protesis;
	unsigned int CantidadPiezas;

public:
	cOrtopedias(string Nombre_, string Direccion_, list<cPiezasOrtopedicas> Protesis_, unsigned int CantidadPiezas_);
	~cOrtopedias();

	list <cPiezasOrtopedicas> get_Protesis();
	unsigned int get_CantidadPiezas();

	void set_Protesis(list <cPiezasOrtopedicas> NuevoEstado);
	void set_CantidadPiezas(unsigned int NuevoEstado);

	string to_string_Ortopedias();
	void Imprimir_Protesis();

};

#endif //_CORTOPEDIAS_H