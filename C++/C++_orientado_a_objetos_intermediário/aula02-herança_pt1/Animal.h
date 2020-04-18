#ifndef ANIMAL_H
#define ANIMAL_H

#include <string>
using namespace std;

class Animal {
    public:
        Animal();
        virtual ~Animal();
        void setNome(const string Nome);
        void setIdade(const int idade);
        const string getNome();
        const int getIdade();
    private:
        string nome;
        int idade;
};

#endif