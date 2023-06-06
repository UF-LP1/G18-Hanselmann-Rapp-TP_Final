#ifndef _CPACIENTES_H
#define _CPACIENTES_H

#include "TipoAlergia.h"
#include "cHospitales.h"

class cPacientes: public cPersona
{
private:
    time_t Nacimiento;
    TipoAlergia Alergias;
    string NombreHospital; //lo dejo en string porque sino hay recursividad y varios problemas
    unsigned int RadioMiembro;
    bool CompatibleQuirurgica;
    bool TieneProtesis;

public:
    cPacientes(string Nombre_, string Apellido_, string Telefono_, time_t Nacimiento_, TipoAlergia Alergias_,
                string NombreHospital_, unsigned int RadioMiembro_, bool CompatibleQuirurgica_, bool TieneProtesis_);
  
    ~cPacientes();

    time_t get_Nacimiento();
    TipoAlergia get_Alergias();
    string get_NombreHospital();
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