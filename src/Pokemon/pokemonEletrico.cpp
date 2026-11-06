#include "pokemonEletrico.hpp"

PokemonEletrico::PokemonEletrico(string nome, int idPokemon, int vida, int ataque, int defesa) 
    : Pokemon(nome, idPokemon, vida, ataque, defesa, "Eletrico") {
}

int PokemonEletrico::calcularDanoRecebido (int damage, string type) {
    if (type == "agua") {
        return std::max(1, (int)round (damage*0.5));
    } else 
        return std::max(1, (int)round (damage*1.0));
}