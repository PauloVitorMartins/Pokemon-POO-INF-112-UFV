#include "pokemonAgua.hpp"

int PokemonAgua::calcularDanoRecebido (int damage, string type) {
    if (type == "fogo") {
        return std::max(1, (int)round (damage*0.5));
    } else if (type == "eletrico") {
        return std::max(1, (int)round (damage*2.0));
    } else if (type == "planta") {
        return std::max(1, (int)round (damage*2.0));
    } else 
        return std::max(1, (int)round (damage*1.0));
}