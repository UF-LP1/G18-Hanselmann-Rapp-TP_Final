#ifndef _CNOQUIRURGICAS_H
#define _CNOQUIRURGICAS_H

#include "cPiezasOrtopedicas.h"
#include "TipoProtesis.h"

class cNoQuirurgicas : public cPiezasOrtopedicas
{
 public:
     cNoQuirurgicas(int Dimensiones_, TipoMaterial Material_, time_t Fabricacion_,
                    cFabricantes* Fabricante_, unsigned int Radio_Protesis_, TipoProtesis Protesis_No_Q_);

     ~cNoQuirurgicas();

    unsigned int get_Radio_Protesis();
    TipoProtesis get_Protesis_No_Q();

    void set_Radio_Protesis(unsigned int NuevoEstado);
    void set_Protesis_No_Q(TipoProtesis NuevoEstado);

private:
    unsigned int Radio_Protesis;
    TipoProtesis Protesis_No_Q;

};

#endif //_CNOQUIRURGICAS_H