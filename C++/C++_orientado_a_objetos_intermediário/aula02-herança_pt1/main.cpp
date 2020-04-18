#include <cstdlib>
#include <iostream>
#include <string>

#include "Cachorro.h"
#include "Peixe.h" 

using namespace std;

int main(int argc, char** argv){

    Cachorro c1;
    Peixe p1;

    c1.setNome("Rex"); c1.setIdade(2); c1.setPatas(4);
    p1.setNome("Fish"); p1.setIdade(1); p1.setAguaDoce(true);

    cout << c1.getNome() << " - " << c1.getIdade() << " - " << c1.getPatas() << endl;
    cout << p1.getNome() << " - " << p1.getIdade() << " - " << p1.isAguaDoce() << endl;

    return 0;
}