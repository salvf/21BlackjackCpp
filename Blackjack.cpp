#include "headers/Blackjack.hpp"
#include "headers/Color.hpp"
#include "headers/Letreros.hpp"
#include <iostream>
#define HIT '1'
#define HOLD '2'

Blackjack::Blackjack() { mazo.initMazo(); }

void Blackjack::uiCartas() {
  system("clear");
  std::cout << "Dealer: ";
  std::cout << blue;
  dealer.verCartas();
  std::cout << def << std::endl << jugador.getNombre() << ": " << lightCyan;
  jugador.verCartas();
}

int Blackjack::uiControl() {
  std::cout << lightBlue << "1. Pedir " << lightYellow << "2. Mantener" << def
            << std::endl;
  return getchar();
}

void Blackjack::uiEstatus() {}

void Blackjack::start() {
  system("clear");
  dealer.setCarta(mazo.repartir());
  dealer.setCarta(mazo.repartir());
  dealer.esconderCarta();
  jugador.setCarta(mazo.repartir());
  jugador.setCarta(mazo.repartir());

  bool aux = true;
  while (aux) {
    uiCartas();
    char c = uiControl();
    if (c == HOLD) {
      aux = false;
      stand();
    } else if (c == HIT) {
      aux = hit(jugador);
    }
  }
}

void Blackjack::eval() {
  uiCartas();
	bool dealerbust = (dealer.getcuentaCartas()>21);
  if (jugador.getcuentaCartas() > dealer.getcuentaCartas() || dealerbust)
    std::cout << green << Letreros::ganar();
  else if (jugador.getcuentaCartas() == dealer.getcuentaCartas())
    std::cout << yellow << Letreros::empate();
  else
    std::cout << lightRed << Letreros::crupier_gana();
}

bool Blackjack::hit(Jugador &j) {
  j.setCarta(mazo.repartir());
  uiCartas();
  if (j.getcuentaCartas() > 21) {
    std::cout << red << Letreros::perder() << def;
    return false;
  }
  return true;
}

void Blackjack::stand() {
  dealer.voltearCarta();
  dealer.esconderCarta();
  dealerDo();
}

void Blackjack::dealerDo() {
  if (dealer.getcuentaCartas() >= 17) {
    eval();
  } else {
    dealer.setCarta(mazo.repartir());
		uiCartas();
    dealerDo();
  }
}