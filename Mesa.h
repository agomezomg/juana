#pragma once
#include "Persona.h"
#include "Repartidor.h"
#include "Player.h"
#include <string>

using std::string;

class Mesa
{
private:	
	Repartidor* repartidor;
	Player* jugador;
	int tableNum;
	string type;

public:
	Mesa();
	Mesa(Repartidor*, Player*, tableNum, type);
	~Mesa();
	void setRepartidor(Repartidor*);
	void setPlayer(Player*);
	void setTableNum(int);
	void setType(string);	
};