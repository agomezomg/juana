#pragma once
#include <string>

using std::string;

class Persona
{
private:
	string name;
	int age;
	string ID;

public:
	Persona();
	Persona(string, int, string);
	virtual ~Persona();
	string getName();
	void setName(string);
	int getAge();
	void setAge(int);
	string getID();
	void setID(string);
	virtual string toString();
};