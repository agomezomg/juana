#include "Persona.h"
#include <string>
#include <sstream>
#include <iostream>

using std::cout;
using std::stringstream;
using std::string;

Persona::Persona() {

}

Persona::Persona(string name, int age, string ID) : name(name) {
	if (age < 18)
	{
		this  -> age = 18;
		cout << "You are too young. Let's pretend you're eighteen. \n";
	} else {
		this -> age = age;
	}

	if (ID.size() == 4)
	{
		this -> ID = ID;
	} else {
		cout << "must be four digits. \n";
		this -> ID = "";
	}
}

Persona::~Persona() {

}

void Persona::getName(string name) {
	this -> name = name;
}

void Persona::getAge(int age) {
	this -> age = age;
}

void Persona::setID(string ID) {
	if (ID.size() == 4)
	{
		this -> ID = ID;
	} else {
		cout << "must be four digits. \n";
		this -> ID = "";
	}
}

string toString() {
	stringstream ss;
	ss << "Nombre: " << name << "\n" << "Edad: " << edad << "\n" << "ID: " << ID << "\n";
	return ss.str();
}