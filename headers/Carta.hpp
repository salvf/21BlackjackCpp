#ifndef CARTA_HPP
#define CARTA_HPP
#include <string>
class Carta{
private:
	int numero_,valorNumerico;
	char tipo_;
	bool ace_max;
public:
	Carta();
	Carta(int numero, char tipo);
	int getNumero();
	char getTipo();
  char getValor();
	int getValorNumerico();
void setAceMax(bool ace);
bool getAceMax();
	void setNumero(int numero);
	void setTipo(char tipo);
	std::string getFiguraP1();
	std::string getFiguraP2();
};
#endif