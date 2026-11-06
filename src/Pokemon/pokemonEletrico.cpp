#include "PokemonEletrico.hpp"
#include "GolpeDano.hpp"
#include "GolpeReducao.hpp"
#include "GolpeCura.hpp"

PokemonEletrico::PokemonEletrico(string nome, int idPokemon, int vida, int ataque, int defesa) 
    : Pokemon(nome, idPokemon, vida, ataque, defesa, "Eletrico") {
    
    if (nome == "Pikachu" || nome == "Raichu") {
        definirGolpe(0, new GolpeDano("Choque do Trovão", 40));
        definirGolpe(1, new GolpeReducaoAtaque("Onda de Choque", 15)); // Paralisa e reduz ataque
        
    } else if (nome == "Voltorb" || nome == "Electrode") {
        definirGolpe(0, new GolpeDano("Faísca", 30));
        definirGolpe(1, new GolpeDano("Explosão", 60)); // Puro dano altíssimo
        
    } else {
        //magnimite
        definirGolpe(0, new GolpeDano("Raio", 35));
        definirGolpe(1, new GolpeReducaoAtaque("Clarão", 10));
    }
}

int PokemonEletrico::calcularDanoRecebido (int damage, string type) {
    if (type == "Agua") {
        return std::max(1, (int)round (damage*0.5));
    } else 
        return std::max(1, (int)round (damage*1.0));
}