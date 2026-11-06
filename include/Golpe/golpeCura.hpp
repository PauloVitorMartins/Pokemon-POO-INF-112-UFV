#ifndef GOLPE_CURA_HPP
#define GOLPE_CURA_HPP

#include "golpe.hpp"

class GolpeCura : public Golpe {
    private:
        int poder;
        int quantidade;

    public:
        GolpeCura (string nome, int poder, int quantidade);
        string aplicar(Pokemon& attacker, Pokemon& target);
};

#endif