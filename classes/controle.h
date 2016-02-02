#ifndef _CONTROLE_H
#define _CONTROLE_H

#include "tsunami.h"
#include "quanser.h"

class Controle
{
public:
	Controle();
	~Controle();

	virtual double acao();
	virtual char* reporte();
protected:
	void trava_seguranca(double *sinal_de_controle, double *nivel_um, double *nivel_dois);

private:
	Tsunami *referencia;

	double *nivel_um;
	double *nivel_dois;
};

#endif
