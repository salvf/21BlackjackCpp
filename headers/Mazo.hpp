#ifndef MAZO_HPP
#define MAZO_HPP

#include "Carta.hpp"
#include <vector>

class Mazo{
private:
	std::vector<Carta> mazo;

public:
 void initMazo();
	int getTamaño();
	Carta repartir();
};

#endif