#include "headers/Humano.hpp"

#include <string>

Humano::Humano() {
  id_ = 1;
  monto_ = 99999;
  nombre_ = "Jugador 1";
}

Humano::Humano(int id, int monto, std::string nombre) {
  id_ = id;
  nombre_ = nombre;
  monto_ = monto;
}

void Humano::setId(int id) { this->id_ = id; }
void Humano::setMonto(int monto) { this->monto_ = monto; }
void Humano::setNombre(std::string nombre) { this->nombre_ = nombre; }
int Humano::getId() { return this->id_; }
int Humano::getMonto() { return this->monto_; }
std::string Humano::getNombre() { return this->nombre_; }
