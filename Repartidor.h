#pragma once
#include "Persona.h"
#include "Baraja.h"
#include "Carta.h"
#include <string>

using std::string;

class Repartidor : public Persona
{
private:
	string difficulty;
	double moneyGiven;
	Baraja* baraja;
	vector<Carta*> hand;
	int gameCount;

public:
	Repartidor();
	~Repartidor();
	
};