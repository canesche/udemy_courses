#include "Animal.h"

#include <iostream>
#include <string>
using namespace std;

Animal::Animal() {}

Animal::~Animal() { }

void Animal::setNome(const string nome) {
    this->nome = nome;
}

void Animal::setIdade(const int idade) {
    this->idade = idade;
}

const string Animal::getNome() {
    return nome;
}

const int Animal::getIdade() {
    return idade;
}