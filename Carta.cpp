#include "headers/Carta.hpp"
#include <string>


Carta::Carta(){
	numero_ = -1;
	tipo_ = 'N';
	valorNumerico = 0;
	ace_max = false;
}

Carta::Carta(int numero, char tipo) {
  numero_ = numero;
  tipo_ = tipo;
  valorNumerico = (numero >= 10) ? 10 : numero;
  ace_max = (numero == 1);
}

void Carta::setNumero(int numero) { this->numero_ = numero; }

void Carta::setTipo(char tipo) { this->tipo_ = tipo; }

void Carta::setAceMax(bool ace) { ace_max = ace; }

int Carta::getNumero() { return numero_; }

char Carta::getTipo() { return tipo_; }

bool Carta::getAceMax() { return ace_max; }

int Carta::getValorNumerico() { return (ace_max) ? 11 : valorNumerico; }

char Carta::getValor() {
  switch (numero_) {
  case 1:
    return 'A';
  case 10:
    return 'X';
  case 11:
    return 'J';
  case 12:
    return 'Q';
  case 13:
    return 'K';
  default:
    char digitos[] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9'};
    return digitos[numero_];
  }
}

std::string Carta::getFiguraP1() {
  switch (tipo_) {
  case 'P':
    return "| :(): |";
    break;
  case 'C':
    return "| (\\/) |";
    break;
  case 'D':
  case 'E':
    return "| :/\\: |";
    break;
  default:
    return "| ://: |";
  }
}
std::string Carta::getFiguraP2() {

  switch (tipo_) {
  case 'P':
    return "| ()() |";
    break;
  case 'C':
  case 'D':
    return "| :\\/: |";
    break;
  case 'E':
    return "| (__) |";
    break;
  default:
    return "| ://: |";
  }
}
