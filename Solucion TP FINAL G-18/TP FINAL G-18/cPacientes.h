#ifndef _CPACIENTES_H
#define _CPACIENTES_H

#include "TipoAlergia.h"
#include "cPersona.h"

#include <iostream>
#include <string>
#include <algorithm>
#include <list>
#include <iterator>
#include <vector>

using namespace std;

class cPacientes: public cPersona
{
private:
    tm Nacimiento;
    TipoAlergia Alergias;
    string NombreHospital; //lo dejo en string porque sino hay recursividad y varios problemas
    unsigned int RadioMiembro;
    bool CompatibleQuirurgica;
    bool TieneProtesis;

public:
    cPacientes(string Nombre_, string Apellido_, string Telefono_, tm Nacimiento_, TipoAlergia Alergias_,
                string NombreHospital_, unsigned int RadioMiembro_, bool CompatibleQuirurgica_, bool TieneProtesis_);
  
    ~cPacientes();

    tm get_Nacimiento();
    TipoAlergia get_Alergias();
    string get_NombreHospital();
    unsigned int get_RadioMiembro();
    bool get_CompatibleQuirurgica();
    bool get_TieneProtesis();

    void set_Nacimiento(tm NuevoEstado);
    void set_Alergias(TipoAlergia NuevoEstado);
    void set_RadioMiembro(unsigned int NuevoEstado);
    void set_CompatibleQuirurgica(bool NuevoEstado);
    void set_TieneProtesis(bool NuevoEstado);

    cPacientes* Imprimir_Preguntas_Agregar_Paciente();

};

#endif //_CPACIENTES_H