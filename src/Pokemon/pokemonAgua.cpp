#include "PokemonAgua.hpp"
#include "GolpeDano.hpp"
#include "GolpeReducao.hpp"
#include "GolpeCura.hpp"

PokemonAgua::PokemonAgua(string nome, int idPokemon, int vida, int ataque, int defesa) 
    : Pokemon(nome, idPokemon, vida, ataque, defesa, "Agua") {
    
    if (nome == "Squirtle" || nome == "Blastoise") {
        definirGolpe(0, new GolpeDano("Jato de Água", 35));
        definirGolpe(1, new GolpeReducaoAtaque("Bolhas", 10)); // Reduz o ataque do inimigo
        
    } else if (nome == "Psyduck" || nome == "Golduck") {
        definirGolpe(0, new GolpeDano("Pistola d'Água", 25));
        definirGolpe(1, new GolpeCura("Onda Mental", 20, 15)); // Bate 20, cura 15
        
    } else {
        definirGolpe(0, new GolpeDano("Investida d'Água", 30));
        definirGolpe(1, new GolpeCura("Aqua Ring", 10, 20));
    }
}

int PokemonAgua::calcularDanoRecebido (int damage, string type) {
    if (type == "Fogo") {
        return std::max(1, (int)round (damage*0.5));
    } else if (type == "Eletrico") {
        return std::max(1, (int)round (damage*2.0));
    } else if (type == "Planta") {
        return std::max(1, (int)round (damage*2.0));
    } else 
        return std::max(1, (int)round (damage*1.0));
}