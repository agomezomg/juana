#pragma once
#include "Persona.h"
#include "Baraja.h"
#include "Carta.h"
#include <string>
#include <vector>

using std::string;
using std::vector;

class Player : public Persona
{
private:	
	string origin;
	string nickname;
	double dasGeld;
	vector<Carta*> hand;

public:
	Player();
	Player(string, int, string, string, string, double);
	~Player();
	void setOrigin(string);
	void setNickname(string);
	int getDasGeld();
	void setDasGeld(double);
	int CalcHand();
	string toString();
	void setHand(Carta*);
	string seeCards();
};