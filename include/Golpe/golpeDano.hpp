#ifndef GOLPE_DANO_HPP
#define GOLPE_DANO_HPP

#include "golpe.hpp"

class GolpeDano:public Golpe {
    private:
        int poder;

    public:
        GolpeDano(string nome, int poder);
        string aplicar(Pokemon& atacante, Pokemon& alvo);
};

#endif