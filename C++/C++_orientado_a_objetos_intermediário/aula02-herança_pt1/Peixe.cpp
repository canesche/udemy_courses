#include "Peixe.h"

#include <iostream>
#include <string>

using namespace std;

Peixe::Peixe() {}

Peixe::~Peixe() {
    cout << "Objeto peixe destruido" << endl;
}

void Peixe::setAguaDoce(const bool aguaDoce) {
    this->aguaDoce = aguaDoce;
}

const string Peixe::isAguaDoce() {
    if (aguaDoce)
        return "Sim";
    else
        return "Nao";
}