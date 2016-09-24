#include "Persona.h"
#include "Player.h"
#include "Baraja.h"
#include "Carta.h"
#include "Mesa.h"
#include "Administrador.h"
#include <iostream>
#include <string>
#include <vector>
#include <stdlib.h>     /* srand, rand */
#include <time.h> 

using namespace std;



int main(int argc, char const *argv[])
{
	Player* c_player;
	Administrador* c_admin = new Administrador();
	Repartidor* c_rep = new Repartidor();

	int createdTables = 0;
	int iSecret;
	vector<Persona*>users;
	vector<Mesa*>mesas;
	int players = 0;
	int reps = 0;

	users.push_back(new Administrador("Ana", 18, "1154", 0, "Nada", 1000000));
	users.push_back(new Player("Cesar", 18, "0000", "El Reczen", "Cesi", 2000));
	int op;
	bool loggedAdmin = false;
	bool loggedUser = false;
	do
	{
		string nameLogin;
		string IDlog;
		cout << "Login \n";
		cout << "Nombre: \n";
		cin >> nameLogin;
		cout << "ID: \n";

		for (int i = 0; i < users.size(); ++i)
		{
			if (dynamic_cast<Administrador*>(users.at(i)) != NULL)
			{
				if (users.at(i) -> getName() == nameLogin && users.at(i) -> getID() == IDlog)
				{
					c_admin = dynamic_cast<Administrador*>(users.at(i));
					loggedAdmin = true;
				}
			} else if (dynamic_cast<Player*>(users.at(i)) != NULL)
			{	
				if (users.at(i) -> getName() == nameLogin && users.at(i) -> getID() == IDlog)
				{
					c_player = dynamic_cast<Player*>(users.at(i));
					loggedUser = true;
				}
				players++;
			} else if (dynamic_cast<Repartidor*>(users.at(i)) != NULL)
			{
				reps++;
			}
		}

		if (loggedAdmin)
		{
			cout << "Bienvenido! Usted es un administrador. \n";
			cout << "0 TO EXIT \n";
			cout << "1. Agregar Mesa \n";
			cout << "2. Agregar Jugador \n";
			cout << "3. Agregar Administrador \n";
			cout << "4. Agregar Repartidor \n";

			if (op == 1)
			{
				if (players >=1 && reps >= 1)
				{
					Repartidor* rep = new Repartidor();
					Player* jug =  new Player();
					int positionRep;
					int positionPlay;
					cout << "A quien desea agregar como repartidor? \n";
					cin >> positionRep;

					if (dynamic_cast<Repartidor*>(users.at(positionRep)) != NULL);
					{
						rep = dynamic_cast<Repartidor*>(users.at(positionRep));
						cout << "Ok! \n";
					}

					cout << "Jugador: ";
					cin >> positionPlay;

					if (dynamic_cast<Player*>(users.at(positionPlay))!=NULL)
					{
						jug = dynamic_cast<Player*>(users.at(positionPlay));
						cout << "Ok! \n";
					}

					int tablenum;

					cout << "tablenum: ";
					cin >> tablenum;

					string type;

					cout << "Type: ";
					cin >> type;

					mesas.push_back(new Mesa(rep, jug, tablenum, type));
					createdTables++;

				} else {
					cout << "No hay suficientes jugadores o repartidores para crear una mesa. \n";
				}
			} else if (op == 2)
			{
				string name;
				int age;
				string ID;
				string origin;
				string nickname;
				double dasGeld;

				cout << "Name: ";
				cin >> name;
				cout << "Age: ";
				cin >> age;
				cout << "ID: ";
				cin >> ID;
				cout << "Origin: ";
				cin >> origin;
				cout << "Nickname: ";
				cin >> nickname;
				cout << "Money: ";
				cin >> dasGeld;

				users.push_back(new Player(name, age, ID, origin, nickname, dasGeld));
			} else if (op == 3)
			{
				string name;
				int age;
				string ID;
				int experienciaLaboral;
				string rangoAspira;
				double sueldo;

				cout << "Name: ";
				cin >> name;
				cout << "Age: ";
				cin >> age;
				cout << "ID: ";
				cin >> ID;
				cout << "Experiencia: ";
				cin >> experienciaLaboral;
				cout << "Rango: ";
				cin >> rangoAspira;
				cout << "Sueldo: ";
				cin >> sueldo;

				users.push_back(new Administrador(name, age, ID, experienciaLaboral, rangoAspira, sueldo));
			} else if (op == 4)
			{
				string name;
				int age;
				string ID;
				string difficulty;
				double moneyGiven;
				int gameCount = 0;
				int maxAmount = 0;

				cout << "Name: ";
				cin >> name;
				cout << "Age: ";
				cin >> age;
				cout << "ID: ";
				cin >> ID;
				cout << "Difficulty: ";
				cin >> difficulty;
				cout << "Money Given: ";
				cin >> moneyGiven;
			}else {
				cout << "Wrong choice m8, soz \n";
			}
		} else if (loggedUser)
		{
			double cantidadApostar;
			cout << "Cantidad a Apostar: ";
			cin >> cantidadApostar;

			if (cantidadApostar > c_player -> getDasGeld())
			{
				cout << "No puede apostar esa cantidad. \n";
			} else {
				int menu = 0;
				do
				{
					cout << "Jugador: " << c_player -> getName();
					cout << "0 TO EXIT \n";
					cout << "1. Ver cartas \n";
					cout << "2. Pedir cartas \n";
					cout << "3. Mostrar cartas \n";

					cin >> menu;

					if (menu == 1)
					{
						cout << c_player -> seeCards();
					} else if (menu == 2)
					{
						c_player -> setHand(c_rep -> Repartir());
						cout << "Se repartieron cartas \n";
					} else if (menu == 3)
					{
						c_player -> seeCards();
						int Resul1, Resul2;
						if (c_player -> CalcHand() == 21)
						{
							cout << "Ganaste! \n";
						} else {
							cout << "Soz you lost. \n";
							c_player -> setDasGeld(cantidadApostar * -1);
						}
					} else {
						cout << "Whoops. try again. lol \n";
					}
				} while (menu != 0);
			}
		} else {
			cout << "uSTED No ExISTe \n";
		}
	} while (op != 0);
	return 0;
}