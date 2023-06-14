#ifndef _CFABRICANTES_H
#define _CFABRICANTES_H

#include "cAsociacion.h"

class cFabricantes: public cAsociacion
{
private:
	string Habilitacion;
	bool SolicitudRequisitos;
	string Requisitos;

public:
	cFabricantes(string Nombre_, string Direccion_, string Habilitacion_, bool SolicitudRequisitos_, string Requisitos_);
	~cFabricantes();

	string get_Habilitacion();
	bool get_SolicitudRequisitos();
	string get_Requisitos();

	void set_Habilitacion(string NuevoEstado);
	void set_SolicitudRequisitos(bool NuevoEstado);
	void set_Requisitos(string NuevoEstado);

	void Imprimir_Requisitos_Med(); //ingresan los requisitos que le puso el doctor al fabricante para hacer la protesis

};

#endif //_CFABRICANTES_H