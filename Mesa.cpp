#include "Persona.h"
#include "Player.h"
#include "Repartidor.h"
#include "Mesa.h"
#include <string>

using std::string;

Mesa::Mesa() {

}

Mesa::Mesa(Repartidor* repartidor, Player* jugador, int tableNum, string type) : repartidor(repartidor), jugador(jugador), tableNum(tableNum), type(type) {

}

Mesa::~Mesa() {
	
}