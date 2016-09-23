#include "Persona.h"
#include "Player.h"
#include "Repartidor.h"
#include "Mesa.h"
#include <sstream>
#include <string>

using std::stringstream;
using std::string;

Mesa::Mesa() {

}

Mesa::Mesa(Repartidor* repartidor, Player* jugador, int tableNum, string type) : repartidor(repartidor), jugador(jugador), tableNum(tableNum), type(type) {

}

Mesa::~Mesa() {

}

void Mesa::setRepartidor(Repartidor* repartidor) {
	this -> repartidor = repartidor;
}

void Mesa::setPlayer(Player* jugador) {
	this -> jugador = jugador;
}

void Mesa::setTableNum(int tableNum) {
	this -> tableNum = tableNum;
}

void Mesa::setType(string type) {
	this -> type = type;
}

string Mesa::toString() {
	stringstream ss;
	ss << "Repartidor: " << repartidor -> getName() << ", Jugador: " << jugador -> getName() << ", Numero: " << tableNum << ", Tipo: " << type "\n";
	return ss.str();
}