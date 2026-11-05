#ifndef GOLPE_HPP
#define GOLPE_HPP

#include "pokemon.hpp"


class Golpe {
    private:
    string nome;

    public:
    Golpe(string nome);
    virtual ~Golpe() = 0;
    string virtual getNome() = 0;
    virtual string aplicar(Pokemon& atacante, Pokemon& alvo);

    protected:
    int virtual calcularDano(Pokemon& atacante, Pokemon& alvo, int poder) = 0;

};

#endif