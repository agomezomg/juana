#pragma once
#include <string>

using std::string;

class Persona
{
private:
	string name;
	int age;
	string id;

public:
	Persona();
	Persona(string, int, string);
	virtual ~Persona();
	void setName(string);
	void setAge(int);
	void setID(string);
	virtual string toString();
};