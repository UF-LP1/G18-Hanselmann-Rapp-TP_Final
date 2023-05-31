#ifndef _CNOQUIRURGICAS_H
#define _CNOQUIRURGICAS_H

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include <ctime>

using namespace std;

#include "cPiezasOrtopedicas.h"
#include "TipoProtesis.h"

class cNoQuirurgicas :
    public cPiezasOrtopedicas
{
private:
    unsigned int Radio_Protesis;
    TipoProtesis Protesis_No_Q;

 public:
    unsigned int get_Radio_Protesis();
    TipoProtesis get_Protesis_No_Q();

    void set_Radio_Protesis(unsigned int NuevoEstado);
    void set_Protesis_No_Q(TipoProtesis NuevoEstado);

};

#endif //_CNOQUIRURGICAS_H