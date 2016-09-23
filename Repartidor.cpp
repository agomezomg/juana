#include <string>
#include <vector>
#include "Baraja.h"
#include "Repartidor.h"
#include <time.h>
#include <stdlib.h>
using std::string;
using namespace std;
#include <sstream>
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
	ss<<Persona::toString()<<"Dificultad: " << difficulty <<" Juegos: " << gameCount <<" Monto Maximo: " << maxAmount;
	return ss.str();
}

void Repartidor::setHand(Carta* card){
 	this -> hand.push_back(card);
}

string Repartidor::seeHand(){
	stringstream ss;
	for (int i = 0; i < this -> Mano.size(); ++i)
	{
		ss << this -> Mano.at(i) -> toString() << "\n";
	}
	
	return ss.str();
}

int Repartidor::CalcularMano(){
	int total = 0, Temporal = 0;
	for (int i = 0; i <this->Mano.size() ; ++i) {
		if (Mano.at(i)->getNumero()==74) {
			Temporal=10;
		} else if(hand.at(i)->getNumero()==75) {
			Temporal=10;
		} else if(hand.at(i)->getNumero()==81) {
			Temporal=10;
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
	return BarajaTexas->getCarta();

}

void Repartidor::setBaraja(){
	this->BarajaTexas=new Baraja();
}