#ifndef _CMEDICOS_H
#define _CMEDICOS_H

#include "cPersona.h"

class cMedicos :
    public cPersona
{
private:

    string Matricula;
    bool Autorizacion;

public:
    string get_Matricula();
    bool get_Autorizacion();

    void set_Matricula(string NuevoEstado);
    void set_Autorizacion(bool NuevoEstado);
};

#endif //_CMEDICOS_H