#pragma once
#include <string>

using std::string;

class Carta
{
private:
	int value;
	string symbol;
	string color;

public:
	Carta();
	Carta(string, int, string);
	~Carta();
	
};