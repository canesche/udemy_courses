#ifndef PEIXE_H
#define PEIXE_H

#include <string>
#include "Animal.h"
using namespace std;

class Peixe : public Animal {
    public:
        Peixe();
        virtual ~Peixe();
        void setAguaDoce(const bool aguaDoce);
        const string isAguaDoce();
    private:
        bool aguaDoce;
};

#endif