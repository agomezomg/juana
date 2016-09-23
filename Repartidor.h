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
	int gameCount;
	int maxAmount;
	Baraja* baraja;
	vector<Carta*> hand;
	int gameCount;

public:
	Repartidor();
	~Repartidor();
	void setDifficulty(string);
	void setMoneyGiven(double);
	void setGameCount(int);
	int calcHand();
	string toString();
	
};