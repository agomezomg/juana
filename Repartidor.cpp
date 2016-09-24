#include "Baraja.h"
#include "Repartidor.h"
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>
#include <sstream>

using std::vector;
using std::string;
using std::stringstream;

Repartidor::Repartidor() {

}

Repartidor::Repartidor(string name, int age, string ID, string difficulty, int gameCount, int maxAmount) : Persona(name, age, ID),
difficulty(difficulty), gameCount(gameCount), maxAmount(maxAmount) {
	this -> baraja = new Baraja();
}

Repartidor::~Repartidor(){

}

void Repartidor::setDifficulty(string difficulty){
	this -> difficulty =difficulty;
}

int Repartidor::getGameCount() {
	return this -> gameCount;
}

void Repartidor::setGameCount(int gameCount){
	this -> gameCount = gameCount;
}

void Repartidor::setMaxAmount(int maxAmount){
	this-> maxAmount = maxAmount;
}

string Repartidor::toString(){
	stringstream ss;
	ss << Persona::toString()<< "Dificultad: " << difficulty << "\nJuegos: " << gameCount <<"\nMonto Maximo: " << maxAmount << "\n";
	return ss.str();
}

void Repartidor::setHand(Carta* card){
 	this -> hand.push_back(card);
}

int Repartidor::CalcHand() {
	int total = 0, temp = 0;
	for (int i = 0; i < this -> hand.size() ; ++i) {
		if (hand.at(i) -> getNum() == 74) {
			temp = 10;
		} else if(hand.at(i) -> getNum() == 75) {
			temp = 10;
		} else if(hand.at(i) -> getNum() == 81) {
			temp = 10;
		} else if(hand.at(i) -> getNum() == 65) {
			temp = 11;
		} else {
			temp = hand.at(i) -> getNum();
		}
		total += temp;
		
	}
	for (int i = 0; i <this->hand.size()+3 ; ++i)
	{
		hand.pop_back();
	}
	return total;
}

Carta* Repartidor::Repartir(){
	return this -> baraja -> getCarta();

}

void Repartidor::setBaraja(){
	this -> baraja = new Baraja();
}

string Repartidor::seeCards(){
	stringstream ss;
	for (int i = 0; i < this -> hand.size(); ++i)
	{
		ss << this -> hand.at(i) -> toString() << "\n";
	}
	return ss.str();
}