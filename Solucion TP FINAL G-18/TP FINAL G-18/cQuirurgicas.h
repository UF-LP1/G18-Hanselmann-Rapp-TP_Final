#ifndef _CQUIRURGICAS_H
#define _CQUIRURGICAS_H

#include "cPiezasOrtopedicas.h"

class cQuirurgicas: public cPiezasOrtopedicas
{
private:

public:
    cQuirurgicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_,
                    cFabricantes* Fabricante_, TipoProtesis Protesis_, string numero_serie_);

    ~cQuirurgicas();

     TipoProtesis get_Protesis();
     void set_Protesis(TipoProtesis NuevoEstado);

};

#endif //_CQUIRURGICAS_H