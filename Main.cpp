#include "Persona.h"
#include "Player.h"
#include "Baraja.h"
#include "Carta.h"
#include "Administrador.h"
#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main(int argc, char const *argv[])
{
	vector<Persona*>users;
	users.push_back(new Administrador("Ana", 18, "1154", 0, "Nada", 1000000))
	int op;
	do
	{
		string nameLogin;
		string ID;
		cout << "Login \n";
		cout << "Nombre: \n";
		cin >> nameLogin;
		cout << ""

	} while (op != 0);
	return 0;
}