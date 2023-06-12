#ifndef _CQUIRURGICAS_H
#define _CQUIRURGICAS_H

#include "cPiezasOrtopedicas.h"

class cQuirurgicas: public cPiezasOrtopedicas
{
private:
   // TipoProtesis Protesis_Q;

public:
    cQuirurgicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_,
                    cFabricantes* Fabricante_, TipoProtesis Protesis_);

    ~cQuirurgicas();

    virtual TipoProtesis get_Protesis();
    virtual void set_Protesis(TipoProtesis NuevoEstado);

};

#endif //_CQUIRURGICAS_H