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
	vector<Carta*> hands;

public:
	Player();
	Player(string, int, string, string, string, double);
	~Player();
	void setOrigin(string);
	void setNickname(string);
	double setDasGeld(double);
	int calcHand();

};