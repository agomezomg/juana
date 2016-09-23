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

Repartidor::Repartidor(string name, string age, string ID, string difficulty, int gameCount, int maxAmount) : Persona(name, age, ID),
difficulty(difficulty), gameCount(gameCount), maxAmount(maxAmount) {
	this -> hand = new Baraja();
}

Repartidor::~Repartidor(){

}

void Repartidor::setDifficulty(string difficulty){
	this -> difficulty =difficulty;
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

int Repartidor::CalcHand(){
	int total = 0, temp = 0;
	for (int i = 0; i < this -> hand.size() ; ++i) {
		if (hand.at(i) -> getNum() == 74) {
			temp = 10;
		} else if(hand.at(i) -> getNum() == 75) {
			temp = 10;
		} else if(hand.at(i) -> getNum() == 81) {
			temp = 10;
		} else if(hand.at(i)->getNumero()==65) {
			temp = 11;
		} else {
			temp = hand.at(i)->getNumero();
		}
		total += temp;
		
	}
	for (int i = 0; i <this->hand.size()+3 ; ++i)
	{
		hand.pop_back();
	}
	return total;

}

int Repartidor::CalcHand(int SobreCarga){
	int total = 0, temp = 0;
	for (int i = 0; i < this -> hand.size() ; ++i)
	{
		if (hand.at(i) -> getNumero() == 74)
		{
			temp = 10;
		} else if(hand.at(i) -> getNumero() == 75) {
			temp = 10;
		} else if(hand.at(i) -> getNumero() == 81) {
			temp = 10;
		} else if(hand.at(i) -> getNumero() == 65) {
			temp = 11;
		} else {
			temp = hand.at(i) -> getNumero();
		}
		total += temp;
		
	}
	return total;
}

Carta* Repartidor::Repartir(){
	return this -> baraja -> getCarta();

}

void Repartidor::setBaraja(){
	this -> baraja = new Baraja();
}

string Repartidor::toString(){
	stringstream ss;
	for (int i = 0; i < this -> hand.size(); ++i)
	{
		ss << this -> hand.at(i) -> toString() << "\n";
	}
	return ss.str();
}