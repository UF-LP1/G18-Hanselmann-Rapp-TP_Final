#include "cRegistros.h"

cRegistros::cRegistros(cHospitales* Hospital_, cMedicos* Medico_, tm FechaSolicitud_, tm FechaEstimativaEntrega_, tm FechaEntregada_, cPiezasOrtopedicas* Protesis_, cPacientes* Paciente_)
{
	this->NombreHospital = Hospital_;
	this->NombreMedico = Medico_;
	this->FechaSolicitud = FechaSolicitud_;
	this->FechaEstimativaEntrega = FechaEstimativaEntrega_;
	this->FechaEntregada = FechaEntregada_;
	this->Protesis = Protesis_;
	this->NombrePaciente = Paciente_;
}

cRegistros::~cRegistros()
{

}

cHospitales* cRegistros::get_NombreHospital()
{
	return this->NombreHospital;
}

string cRegistros::get_NombreMedico()
{
	return this->NombreMedico->get_Nombre();
}

tm cRegistros::get_FechaSolicitud()
{
	return this->FechaSolicitud;
}

tm cRegistros::get_FechaEstimativaEntrega()
{
	return this->FechaEstimativaEntrega;
}

tm cRegistros::get_FechaEntregada()
{
	return this->FechaEntregada;
}

cPiezasOrtopedicas* cRegistros::get_Protesis()
{
	return this->Protesis;
}

string cRegistros::get_NombrePaciente()
{
	return this->NombrePaciente->get_Nombre();
}

void cRegistros::set_FechaSolicitud(tm NuevoEstado)
{
	this->FechaSolicitud = NuevoEstado;
}

void cRegistros::set_FechaEstimativaEntrega(tm NuevoEstado)
{
	this->FechaEstimativaEntrega = NuevoEstado;
}

void cRegistros::set_FechaEntregada(tm NuevoEstado)
{
	this->FechaEntregada = NuevoEstado;
}

int cRegistros::consrandom(int maximo, int minimo)
{
	srand(time(NULL));
	int valor = rand() % (maximo - minimo) + minimo;
	return valor;
}

bool bisiestos(int anio)
{
	if ((anio % 4) == 0 && (anio % 100) != 0 || anio % 400 != 0)
		return true;
	else
		return false;
}

bool cRegistros::Diferencia_Entrega()
{
	time_t timer;
	time(&timer);
	
	int minrand, horarand, diarand, mesrand, aniorand;
	minrand = consrandom(59, 0);
	horarand = consrandom(20, 6); //las horas en la libreria van de 0 a 23
	mesrand = consrandom(11, 0);  //los meses en la libreria van de 0 a 11
	aniorand = consrandom(124, 123);  // en un rango de 3 anios

	bool anio_bisiesto = bisiestos(aniorand + 1900);


	if (anio_bisiesto == true && mesrand == 1)
		diarand = consrandom(29, 1); //los dias del mes van de 0 a 31.
	else
		diarand = consrandom(28, 1);

	if (mesrand == 0 || mesrand == 2 || mesrand == 4 || mesrand == 6 || mesrand == 7 || mesrand == 9 || mesrand == 11)
		diarand = consrandom(31, 1);
	else if (mesrand != 1)
		diarand = consrandom(30, 1);

	FechaEstimativaEntrega = { 0, minrand, horarand, diarand, mesrand, aniorand };
	time_t soli = timer;
	time_t estim = mktime(&FechaEstimativaEntrega);
	time_t entre = mktime(&entregada);

	double diferencia = 0.0;

	if (estim != (time_t)(-1) || entre != (time_t)(-1))
	{
		diferencia = difftime(entre, estim) / (86400);
	}
	if (diferencia > 0)
	{
		return false;
	}
	else if (diferencia <= 0)
	{
		return true;
	}
	return false;
}
