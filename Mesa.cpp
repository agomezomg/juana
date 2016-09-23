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

Mesa::Mesa(Repartidor* repartidor, Player* jugador, int tableNum, string type) : tableNum(tableNum), type(type) {
	this -> repartidor = repartidor;
	this -> jugador = jugador;
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
	ss << "Repartidor: " << (repartidor -> getName());
	ss << ", Jugador: " << (jugador -> getName());
	ss << ", Numero: " << tableNum;
	ss << ", Tipo: " << type << "\n";
	return ss.str();
}