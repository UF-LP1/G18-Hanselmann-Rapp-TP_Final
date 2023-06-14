#ifndef _CNOQUIRURGICAS_H
#define _CNOQUIRURGICAS_H

#include "cPiezasOrtopedicas.h"
#include "TipoProtesis.h"

class cNoQuirurgicas : public cPiezasOrtopedicas
{
private:
    unsigned int Radio_Protesis;

 public:
     cNoQuirurgicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_,
         cFabricantes* Fabricante_, TipoProtesis Protesis_, string numero_serie_, unsigned int Radio_Protesis_);

     ~cNoQuirurgicas();

    unsigned int get_Radio_Protesis();
    TipoProtesis get_Protesis();

    void set_Radio_Protesis(unsigned int NuevoEstado);
    void set_Protesis(TipoProtesis NuevoEstado);

};

#endif //_CNOQUIRURGICAS_H