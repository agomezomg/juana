#pragma once
#include <string>

using std::string;

class Carta
{
private:
	char num;
	string symbol;
	string colour;

public:
	Carta();
	Carta(string, int, string);
	~Carta();
	char getNum();
	void setNum(char);
	void setSymbol();
	void setColour();
};