#ifndef POKEMON_PLANTA_HPP
#define POKEMON_PLANTA_HPP

#include "Pokemon.hpp"

class PokemonPlanta:public Pokemon {
    public:
        PokemonPlanta(string nome, int idPokemon, int vida, int ataque, int defesa);
        int calcularDanoRecebido(int dano, string tipoAtacante);
};

#endif