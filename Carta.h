#pragma once
#include <string>

using std::string;

class Carta
{
private:
	int num;
	string symbol;
	string colour;

public:
	Carta();
	Carta(string, int, string);
	~Carta();
	int getNum();
	string getSymbol();
	void setSymbol(string);
	string getColour();
	void setColour(string);
	string toString();
};