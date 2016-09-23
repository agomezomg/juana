#include "Carta.h"
#include <sstream>
#include <string>

using std::string;

Carta::Carta(string symbol,int num,string colour) : symbol(symbol), num(num), colour(colour){

}

Carta::~Carta(){

}

string Carta::getSymbol(){
	return this -> symbol;
}

int Carta::getNum(){
	return this -> num;
}

string Carta::getColour(){
	return this -> colour;
}

string Carta::toString(){
	stringstream ss;
	if(num == 75){
		ss << symbol << "  " << 'J' << " ";	
	}else if(num == 81){
		ss<< symbol << "  " << 'Q' << " ";
	}else if(num == 65){
		ss<< symbol << "  " << 'A' << " ";
	}else if(num == 74){
		ss<< symbol << "  " << 'K' << " ";
	}	
	return ss.str();
}