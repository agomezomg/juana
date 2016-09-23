#include "Administrador.h"
#include "Persona.h"
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

Administrador::Administrador() {
	
}

Administrador::Administrador(string name, int edad, string ID, int experienciaLaboral, string rangoAspira, double sueldo) : Persona(name, edad, ID),
experienciaLaboral(experienciaLaboral), rangoAspira(rangoAspira), sueldo(sueldo) {

}

void Administrador::setExperienciaLaboral(int experienciaLaboral) {
	this -> experienciaLaboral = experienciaLaboral;
}

void Administrador::setRangoAspira(string rangoAspira){
	this-> rangoAspira = rangoAspira;
}

void Administrador::setSueldo(double sueldo) {
	this -> sueldo = sueldo;
}

string Administrador::toString(){
	stringstream ss;
	ss << Persona::toString() << "Rango Administrador: " << rangoAspira << "\n" << "ExperienciaLaboral: ";
	ss << experienciaLaboral << "\n" << "Sueldo: "<< sueldo;
}