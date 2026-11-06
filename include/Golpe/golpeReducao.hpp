#ifndef GOLPE_REDUCAO_ATAQUE
#define GOLPE_REDUCAO_ATAQUE

#include "golpe.hpp"

class GolpeReducaoAtaque:public Golpe {
    private:
        int poder;

    public:
        GolpeReducaoAtaque(string name, int power);
        string aplicar(Pokemon& attacker, Pokemon& targer);
};

#endif