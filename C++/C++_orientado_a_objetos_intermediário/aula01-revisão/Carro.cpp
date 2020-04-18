#include "Carro.h"

#include <string>
#include <iostream>
using namespace std;

void Carro::setMarca(const string marca){
    this->marca = marca;
}

const string Carro::getMarca() {
    return marca;
}

void Carro::setAno(const int ano) {
    if (ano > 1990)
        this->ano = ano;
    else
        this->ano = 1990;
}

const int Carro::getAno(){
    return ano;
}

Carro::Carro() {
    this->marca = "Fiat";
}

Carro::Carro(string marca, int ano){
    this->marca = marca;
    this->ano = ano;
}

Carro::Carro(int ano){
    this->ano = ano;
}

Carro::~Carro() {
    cout << "Carro " << marca << " foi destruido" << endl;
}

int Carro::pneus = 4;