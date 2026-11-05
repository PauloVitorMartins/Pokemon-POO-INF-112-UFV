#ifndef POKEMON_AGUA_HPP
#define POKEMON_AGUA_HPP
#include "pokemon.hpp"

class PokemonAgua:public Pokemon {
    public:
        PokemonAgua(string nome, int idPokemon, int vida, int ataque, int defesa);
        int calcularDanoRecebido(int dano, string tipoAtacante);
};

#endif