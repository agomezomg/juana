Casino:	Main.o Persona.o Baraja.o Carta.o Repartidor.o Administrador.o Player.o 
	g++ Main.o Persona.o Baraja.o Carta.o Repartidor.o Administrador.o Player.o -lncurses -o Casino

Main.o:	Main.cpp Persona.h Baraja.h Carta.h Repartidor.h Administrador.h Player.h 
	g++ -c Main.cpp

Persona.o:	Persona.cpp Persona.h
	g++ -c Persona.cpp

Repartidor.o:	Repartidor.h Persona.h Repartidor.cpp
	g++ -c Repartidor.cpp

Administrador.o:	Administrador.h Persona.h Administrador.cpp
	g++ -c Administrador.cpp

Player.o:	Player.h Persona.h Player.cpp
	g++ -c Player.cpp

Baraja.o:	Baraja.h Baraja.cpp
	g++ -c Baraja.cpp

Carta.o:	Carta.h Carta.cpp
	g++ -c Carta.cpp

clean:
	rm -f *.o Casino