#ifndef JUGADOR_HPP
#define JUGADOR_HPP

#include <string>
#include <vector>
#include "Carta.hpp"

class Jugador{
 private:
		void switchAceMax();
		void evalCartas();
 protected: 
		std::vector<Carta> cartas;
		int cuentaCartas;
 public:
		Jugador();
		void setCarta(Carta carta);
		void limpiarCartas();
		int getcuentaCartas();
		std::vector<Carta> getMano();
		void verCartas();
};





#endif