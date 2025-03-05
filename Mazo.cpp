#include "headers/Mazo.hpp"
#include <algorithm>
#include <iostream>
#include <ctime>

void Mazo::initMazo() {
  mazo.clear();
  char tipos[] = {'C', 'D', 'P', 'E'};
  for (int tipo = 0; tipo < 4; tipo++) {
    for (int valor = 0; valor < 13; valor++) {
      Carta carta(valor + 1, tipos[tipo]);
      mazo.push_back(carta);
    }
  }
	std::srand ( unsigned ( std::time(0) ) );
  std::random_shuffle(mazo.begin(), mazo.end());
}

int Mazo::getTamaño() { return mazo.size(); }

Carta Mazo::repartir() {
  int posicion = (rand() % (mazo.size()));
  Carta carta = mazo[posicion];
  mazo.erase(mazo.begin() + posicion);
  return carta;
}