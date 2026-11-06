#ifndef GOLPE_HPP
#define GOLPE_HPP

#include "Pokemon.hpp"


class Golpe {
    private:
        string nome;

    public:
        Golpe(string nome);
        virtual ~Golpe();
        string getNome();
        virtual string aplicar(Pokemon& atacante, Pokemon& alvo) = 0; //na documentacao fala que ele e um metodo abstrato
        //agora na classe filha na documentacao pede para dar override, o que faz pouco sentido, vou deixar ele como metodo abstrato
        //que seja implementado nas filhas

    protected:
        int virtual calcularDano(Pokemon& atacante, Pokemon& alvo, int poder);

};

#endif