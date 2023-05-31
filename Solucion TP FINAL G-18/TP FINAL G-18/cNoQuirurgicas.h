#ifndef _CNOQUIRURGICAS_H
#define _CNOQUIRURGICAS_H



#include "cPiezasOrtopedicas.h"
#include "TipoProtesis.h"

class cNoQuirurgicas :
    public cPiezasOrtopedicas
{

 public:

    unsigned int get_Radio_Protesis();

    void set_Radio_Protesis(unsigned int NuevoEstado);


private:
    unsigned int Radio_Protesis;
    TipoProtesis Protesis_No_Q;


};

#endif //_CNOQUIRURGICAS_H