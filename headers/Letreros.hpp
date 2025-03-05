#ifndef LETREROS_HPP
#define LETREROS_HPP

#include <string>

struct Letreros{
		static std::string titulo();
		static std::string menu();
		static std::string instrucciones();
  static std::string crupier_gana();
		static std::string blackjack();
		static std::string ganar();
		static std::string perder();
		static std::string empate();
		static std::string gpj();
		static std::string carta(int valor, char tipo);
};

#endif