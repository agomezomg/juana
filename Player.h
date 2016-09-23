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
	//string getOrigin();
	void setOrigin(string);
	//string getNickname();
	void setNickname(string);
	void setDasGeld(double);
	int CalcHand();
	string toString();
	void setHand(Carta*);
};