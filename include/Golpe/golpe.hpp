#ifndef GOLPE_HPP
#define GOLPE_HPP

#include "pokemon.hpp"


class Golpe {
    private:
        string nome;

    public:
        Golpe(string nome);
        virtual ~Golpe();
        string getNome();
        virtual string aplicar(Pokemon& atacante, Pokemon& alvo) = 0;

    protected:
        int virtual calcularDano(Pokemon& atacante, Pokemon& alvo, int poder);

};

#endif