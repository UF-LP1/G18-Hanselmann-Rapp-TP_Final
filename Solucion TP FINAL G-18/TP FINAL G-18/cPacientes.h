#ifndef _CPACIENTES_H
#define _CPACIENTES_H

#include "cPersona.h"
#include "TipoAlergia.h"
#include "cHospitales.h"

#include <iostream>
#include <string>
#include <vector>
#include <list>
#include <iterator>
#include <ctime>

class cPacientes: public cPersona
{
private:
    time_t Nacimiento;
    TipoAlergia Alergias;
    cHospitales Atendido;
    unsigned int RadioMiembro;
    bool CompatibleQuirurgica;
    bool TieneProtesis;

public:
    cPacientes(string Nombre_, string Apellido_, string Telefono_, time_t Nacimiento_, TipoAlergia Alergias_,
                cHospitales& Atendido_, unsigned int RadioMiembro_, bool CompatibleQuirurgica_, bool TieneProtesis_);

    ~cPacientes();

    time_t get_Nacimiento();
    TipoAlergia get_Alergias();
    cHospitales get_Atendido();
    unsigned int get_RadioMiembro();
    bool get_CompatibleQuirurgica();
    bool get_TieneProtesis();

    void set_Nacimiento(time_t NuevoEstado);
    void set_Alergias(TipoAlergia NuevoEstado);
    void set_RadioMiembro(unsigned int NuevoEstado);
    void set_CompatibleQuirurgica(bool NuevoEstado);
    void set_TieneProtesis(bool NuevoEstado);

};

#endif //_CPACIENTES_H