#ifndef _CQUIRURGICAS_H
#define _CQUIRURGICAS_H

#include "cPiezasOrtopedicas.h"
#include "TipoProtesis.h"

class cQuirurgicas: public cPiezasOrtopedicas
{

public:

    cQuirurgicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_, cFabricantes Fabricante_, static unsigned int stock_, TipoProtesis Protesis_Q_);

    ~cQuirurgicas();

    TipoProtesis get_Protesis_Q();

    void set_Protesis_Q(TipoProtesis NuevoEstado);

private:
    TipoProtesis Protesis_Q;

};

#endif //_CQUIRURGICAS_H