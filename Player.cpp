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
name(name), age(age),  ID(ID){

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
	this -> dasGeld = dasGeld;
}

string Player::toString() {
	stringstream ss;
	ss << Player::toString() << "Procedencia: " << origin << "\n" << "Apodo: " << nickname << "\n" << "Dinero: " << dasGeld << "\n";
	return ss.str();
}