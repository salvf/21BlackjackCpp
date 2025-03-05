#ifndef HUMANO_HPP
#define HUMANO_HPP

#include <string>
#include "Jugador.hpp"

class Humano : public Jugador{
 private: 
		std::string nombre_;
		int id_;
		int monto_;
 public:
		Humano();
		Humano(int id, int monto, std::string nombre);
		void setId(int id);
		void setMonto(int monto);
		void setNombre(std::string nombre);
		int getId();
		int getMonto();
		std::string getNombre();
};

#endif