#include "pokemonPlanta.hpp"

int PokemonPlanta::calcularDanoRecebido (int damage, string type) {
    if (type == "fogo") {
        return std::max(1, (int)round (damage*2.0));
    } else if (type == "agua") {
        return std::max(1, (int)round (damage*0.5));
    } else 
        return std::max(1, (int)round (damage*1.0));
}