#ifndef POKEMON_FOGO_HPP
#define POKEMON_FOGO_HPP

#include "Pokemon.hpp"

class PokemonFogo:public Pokemon {
    public:
        PokemonFogo(string nome, int idPokemon, int vida, int ataque, int defesa);
        int calcularDanoRecebido(int dano, string tipoAtacante);
};

#endif