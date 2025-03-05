#ifndef BLACKJACK_HPP
#define BLACKJACK_HPP
#include "Humano.hpp"
#include "Dealer.hpp"
#include "Mazo.hpp"
#include <vector>
class Blackjack {
private:
	void uiCartas();
	int uiControl();
	void uiEstatus();
	void dealerDo();
public:
	Dealer dealer;
	Mazo mazo;
	Humano jugador;
	//std::vector<Humano> jugadores;
	Blackjack();
	void start();
	void eval();
	bool hit(Jugador& j);
	void stand();
};
#endif