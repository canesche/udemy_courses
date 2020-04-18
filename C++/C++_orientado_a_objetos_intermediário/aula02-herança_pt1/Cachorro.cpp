#include "Cachorro.h"

#include <iostream>
#include <string>

using namespace std;

Cachorro::Cachorro(){}

Cachorro::~Cachorro(){
    cout << "Objeto cachorro destruido" << endl;
}

void Cachorro::setPatas(const int patas) {
    this->patas = patas;
}

const int Cachorro::getPatas() {
    return patas;
}