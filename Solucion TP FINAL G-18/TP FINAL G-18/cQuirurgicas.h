#ifndef _CQUIRURGICAS_H
#define _CQUIRURGICAS_H

#include "cPiezasOrtopedicas.h"
#include "TipoProtesis.h"

class cQuirurgicas: public cPiezasOrtopedicas
{
private:
    TipoProtesis Protesis_Q;

public:
    TipoProtesis get_Protesis_Q();

    void set_Protesis_Q(TipoProtesis NuevoEstado);

};

#endif //_CQUIRURGICAS_H