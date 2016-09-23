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

public:
	Repartidor();
	Repartidor(string, int, string, string, int, int string);
	~Repartidor();
	void setDifficulty(string);
	double getMoneyGiven();
	void setMoneyGiven(double);
	int getGameCount();
	void setGameCount(int);
	int CalcHand();
	int getMaxAmount();
	string toString();
	void setHand(Carta*);
	Carta* Repartir();
	void setBaraja();
	void setMaxAmount(int);
	string seeCards();
};