#ifndef _CPERSONA_H
#define _CPERSONA_H

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>

using namespace std;

class cPersona
{
protected:
    string Nombre;
    string Apellido;
    string Telefono;

public:
    cPersona(string Nombre_, string Apellido_, string Telefono_);
    ~cPersona();

    string get_Nombre();
    string get_Apellido();
    string get_Telefono();

    void set_Nombre(string NuevoEstado);
    void set_Apellido(string NuevoEstado);
    void set_Telefono(string NuevoEstado);
   
};

#endif //_CPERSONA_H