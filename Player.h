#pragma once
#include "Persona.h"
#include "Baraja.h"
#include "Carta.h"
#include <string>

using std::string;

class Player : public Persona
{
private:	
	string origin;
	string nickname;
	double dasGeld;
	

public:
	Player();
	Player(string, int, string, string, string, double);
	~Player();
	void setOrigin(string);
	void setNickname(string);
	double setDasGeld(double);
};