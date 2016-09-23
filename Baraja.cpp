#include "Carta.h"
#include "Baraja.h"
#include <string>
#include <vector>
#include <time.h>
#include <stdlib.h>

using namespace std;

Baraja::Baraja() {
	string symbol;
	string colour;
	char value;

	for (int i = 0; i < 4; ++i) {
		for (int j = 1; j < 13; ++j) {
			if (i ==0 ) {
				symbol = "♠";
				colour = "negro";
			} else if (i == 1) {
				symbol = "♥";
				colour = "rojo";
			} else if (i==2) {
				symbol = "♦";
				colour = "rojo";
			}else if (i==3) {
				symbol = "♣";
				colour = "negro";
			}

			if (j == 11) {
				value = 74;
			}else if (j==12)
			{
				value = 81;
			}else if (j==13)
			{
				value = 75;
			}else if (j==1)
			{
				value = 65;
			}else{
				value = j;
			}
			this->baraja.push_back(new Carta(symbol, value, colour));
		}
	}
}