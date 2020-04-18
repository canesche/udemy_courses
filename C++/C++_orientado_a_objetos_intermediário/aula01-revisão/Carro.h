#ifndef CARRO_H
#define CARRO_H

#include <string>
using namespace std;

class Carro {
    public:
        static int pneus;
        Carro();
        Carro(string marca, int ano);
        Carro(int ano);
        ~Carro();
        void setMarca(const string marca);
        const string getMarca();
        void setAno(const int ano);
        const int getAno();
    private:
        string marca;
        int ano;
};

#endif /* CARRO_H */