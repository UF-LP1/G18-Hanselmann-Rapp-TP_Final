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

cMedicos* cRegistros::get_NombreMedico()
{
	return this->NombreMedico;
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

TipoProtesis cRegistros::get_Protesis()
{
	return this->Protesis->get_Protesis();
}

cPacientes* cRegistros::get_NombrePaciente()
{
	return this->NombrePaciente;
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

bool cRegistros::bisiestos(int anio)
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
	
	time_t soli = timer;

	int minestimrand = 0, horaestimrand = 0, diaestimrand = 0, mesestimrand = 0, anioestimrand = 0,  minentrand = 0, horaentrand = 0, diaentrand = 0, mesentrand = 0, anioentrand = 0;
	//HAGO RANDOMS PARA LA PARTE DE LA FECHA ESTIMATIVA DE LA ENTREGA
	minestimrand = consrandom(59, 0);
	horaestimrand = consrandom(20, 6); //las horas en la libreria van de 0 a 23
	mesestimrand = consrandom(11, 0);  //los meses en la libreria van de 0 a 11
	anioestimrand = consrandom(125, 123);  // en un rango de 3 anios

	bool anio_bisiesto_estim = bisiestos(anioestimrand + 1900);
	//ME FIJO EN CASO DE QUE SEA UN ANIO BISIESTO Y QUE TIPO DE MES ES CUANTOS DIAS SERIAN
	if (anio_bisiesto_estim == true && mesestimrand == 1)
		diaestimrand = consrandom(29, 1); //los dias del mes van de 0 a 31.
	else
		diaestimrand = consrandom(28, 1);

	if (mesestimrand == 0 || mesestimrand == 2 || mesestimrand == 4 || mesestimrand == 6 || mesestimrand == 7 || mesestimrand == 9 || mesestimrand == 11)
		diaestimrand = consrandom(31, 1);
	else if (mesestimrand != 1)
		diaestimrand = consrandom(30, 1);

	FechaEstimativaEntrega = { 0, minestimrand, horaestimrand, diaestimrand, mesestimrand, anioestimrand };
	time_t estim = mktime(&FechaEstimativaEntrega);

	//HAGO RANDOMS PARA LA PARTE DE LA FECHA ENTREGADA
	minentrand = consrandom(59, 0);
	horaentrand = consrandom(20, 6); //las horas en la libreria van de 0 a 23
	mesentrand = consrandom(11, 0);  //los meses en la libreria van de 0 a 11
	anioentrand = consrandom(125, 123);  // en un rango de 3 anios

	bool anio_bisiesto_ent = bisiestos(anioentrand + 1900);
	//ME FIJO EN CASO DE QUE SEA UN ANIO BISIESTO Y QUE TIPO DE MES ES CUANTOS DIAS SERIAN
	if (anio_bisiesto_ent == true && mesentrand == 1)
		diaentrand = consrandom(29, 1); //los dias del mes van de 0 a 31.
	else
		diaentrand = consrandom(28, 1);

	if (mesentrand == 0 || mesentrand == 2 || mesentrand == 4 || mesentrand == 6 || mesentrand == 7 || mesentrand == 9 || mesentrand == 11)
		diaentrand = consrandom(31, 1);
	else if (mesentrand != 1)
		diaentrand = consrandom(30, 1);

	FechaEntregada = { 0, minentrand, horaentrand, diaentrand, mesentrand, anioentrand };
	time_t entre = mktime(&FechaEntregada);

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



