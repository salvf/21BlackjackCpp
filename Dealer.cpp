#include "headers/Dealer.hpp"

Dealer::Dealer() : Jugador() { this->volteo = true; }

void Dealer::voltearCarta() {
  this->volteo = !this->volteo;
	
  verCartas();
}

void Dealer::esconderCarta() {
	if(volteo){
		cartaEscondida = cartas[cartas.size() - 1];
		cartas.pop_back();
		Carta escondida;
		cartas.push_back(escondida);
	}else{
		cartas.pop_back();
		cartas.push_back(cartaEscondida);
	}
  
}
