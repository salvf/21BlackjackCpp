#ifndef DEALER_HPP
#define DEALER_HPP
#include "Carta.hpp"
#include "Jugador.hpp"

class Dealer : public Jugador{
private:
	bool volteo;
	Carta cartaEscondida;
public:
Dealer();
void voltearCarta();
void esconderCarta();
};
#endif