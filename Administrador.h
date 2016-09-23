#pragma once
#include "Persona.h"
#include <string.h>

using std::string;

class Administrador : public Persona
{
private:
	int experienciaLaboral;
	string rangoAspira;
	double sueldo;

public:
	Administrador();
	Administrador(string, int, string, int, string, double);
	~Administrador();
	void setExperienciaLaboral(int);
	void getRangoAspira(string);
	void getSueldo(double);
	string toString();
};