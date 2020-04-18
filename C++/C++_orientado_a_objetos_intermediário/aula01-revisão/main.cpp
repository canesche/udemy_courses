#include <cstdlib>
#include <string>
#include <iostream>

using namespace std;

#include "Carro.h"

int main(int argc, char** argv) {
    Carro c1;
    c1.setMarca("Ferrari");
    c1.setAno(2017);

    Carro c2("Fiat", 2017);
    c2.setAno(2018);

    cout << c1.pneus << endl;
    cout << c2.pneus << endl;

    c1.pneus = 2;

    cout << c1.pneus << endl;
    cout << c2.pneus << endl;

    return 0;
}