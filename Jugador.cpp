#include "headers/Jugador.hpp"
#include "headers/Carta.hpp"
#include <iostream>

Jugador::Jugador() { cuentaCartas = 0; }

void Jugador::switchAceMax() {
  for (Carta c : cartas) {
    if (c.getAceMax()) {
      c.setAceMax(false);
      evalCartas();
      break;
    }
  }
}

void Jugador::evalCartas() {
  cuentaCartas = 0;
  bool ace = false;
  for (Carta c : cartas) {
    cuentaCartas += c.getValorNumerico();
    if (c.getAceMax())
      ace = true;
  }
  if (cuentaCartas > 21 || (ace)) {
    switchAceMax();
  }
}

void Jugador::setCarta(Carta carta) {
  cartas.push_back(carta);
  evalCartas();
}

void Jugador::limpiarCartas() {
  cartas.clear();
  cuentaCartas = 0;
}

int Jugador::getcuentaCartas() { return cuentaCartas; }

std::vector<Carta> Jugador::getMano() { return cartas; }

void Jugador::verCartas() {

	std::cout << "\n";
	for (int i = 0; i < 6; i++) {
		for (int j = 0; j < cartas.size(); j++) {
			char valor = (cartas[j].getValor() >= 1)
											 ? static_cast<char>(cartas[j].getValor())
											 : ' ';
			switch (i) {
			case 0:
				std::cout << ".------.";
				break;
			case 1:
				std::cout << "|" << valor << ".--. |";
				break;
			case 2:
				std::cout << cartas[j].getFiguraP1();
				break;
			case 3:
				std::cout << cartas[j].getFiguraP2();
				break;
			case 4:
				std::cout << "| '--'" << valor << "|";
				break;
			case 5:
				std::cout << "`------'";
			}
		}
		std::cout << "\n";
	}
}