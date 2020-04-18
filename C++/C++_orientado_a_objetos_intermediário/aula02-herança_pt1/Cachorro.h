#ifndef CACHORRO_H
#define CACHORRO_H

#include <string>
#include "Animal.h"
using namespace std;

class Cachorro : public Animal {
    public:
        Cachorro();
        virtual ~Cachorro( );
        void setPatas(const int patas);
        const int getPatas();
    private:
        int patas;
};

#endif