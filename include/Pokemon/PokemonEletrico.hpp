#ifndef POKEMON_ELETRICO_HPP
#define POKEMON_ELETRICO_HPP

#include "Pokemon.hpp"

class PokemonEletrico:public Pokemon {
    public:
        PokemonEletrico(string nome, int idPokemon, int vida, int ataque, int defesa);
        int calcularDanoRecebido(int dano, string tipoAtacante);
};

#endif