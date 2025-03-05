#include "headers/Blackjack.hpp"
#include "headers/Color.hpp"
#include "headers/Letreros.hpp"
#include <iostream>

using namespace std;

char presionar_boton() {
  system("stty raw");
  char c = getchar();
  system("stty cooked");
  return c;
}

char pantallaPrincipal() {
  system("clear");

  cout << bold_on << magenta << Letreros::titulo() << bold_off << def;
  cout << bold_off << lightBlue << Letreros::menu() << endl;
  return getchar();
}

void menu() {
  Blackjack juego;
  char a = pantallaPrincipal();
  switch (a) {
  case '1':
    juego.start();
    break;
  case '2':
    cout << Letreros::instrucciones() << endl;
    presionar_boton();
    presionar_boton();
    menu();
    break;
  case '3':
    system("clear");
    cout << bold_on << lightYellow << Letreros::gpj() << endl;
  }
}

int main() {
  menu();
  /*
  Agregar Fabrica de cartas
  Agregar Logica de juego (Crupier vs Jugador)
  Agregar interfaz de juego
  Posible multijugador
  Codigo escalable a multijugador
  */
  return 0;
}