#ifndef _CASOCIACION_H
#define _CASOCIACION_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include <ctime>

using namespace std;

class cAsociacion
{

public:

	string get_Nombre();

	void set_Nombre(string NuevoEstado);

	string get_Apellido();

	void set_Apellido(string NuevoEstado);


protected:

	string nombre;
	string direccion;
};


#endif //_CASOCIACION_H