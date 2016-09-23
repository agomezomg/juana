#include "Player.h"
#include "Persona.h"
#include "Baraja.h"
#include "Carta.h"
#include <string>
#include <sstream>

using std::stringstream;
using std::string;

Player::Player() {

}

Player::Player(string name, int age, string ID, string origin, string nickname, double dasGeld) : Persona(name, age, ID),
origin(origin), nickname(nickname),  dasGeld(dasGeld){

}

Player::~Player() {

}

void Player::setOrigin(string origin) {
	this -> origin = origin;
}

void Player::setNickname(string nickname) {
	this -> nickname = nickname;
}

void Player::setDasGeld(double dasGeld) {
	this -> dasGeld += dasGeld;
}

string Player::toString() {
	stringstream ss;
	ss << Player::toString() << "Procedencia: " << origin << "\n" << "Apodo: " << nickname << "\n" << "Dinero: " << dasGeld << "\n";
	return ss.str();
}

void Player::setHand(Carta* card){
 	this -> hand.push_back(card);
}

int Player::CalcHand(){
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
		}
		total += temp;
	}

	for (int i = 0; i < hand.size() + 3 ; ++i)
	{
		hand.pop_back();
	}

	return total;
}