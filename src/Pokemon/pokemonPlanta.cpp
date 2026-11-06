#include "PokemonPlanta.hpp"
#include "GolpeDano.hpp"
#include "GolpeReducao.hpp"
#include "GolpeCura.hpp"

PokemonPlanta::PokemonPlanta(string nome, int idPokemon, int vida, int ataque, int defesa) 
    : Pokemon(nome, idPokemon, vida, ataque, defesa, "Planta") {
    
    if (nome == "Bulbasaur" || nome == "Venusaur") {
        definirGolpe(0, new GolpeDano("Chicote de Vinha", 35));
        definirGolpe(1, new GolpeCura("Semente Sanguessuga", 15, 20)); // Clássico roubo de vida
        
    } else if (nome == "Oddish" || nome == "Vileplume") {
        definirGolpe(0, new GolpeDano("Folha Mágica", 25));
        definirGolpe(1, new GolpeReducaoAtaque("Pó Venenoso", 15)); // Enfraquece o oponente
        
    } else {
        definirGolpe(0, new GolpeDano("Folha Navalha", 30));
        definirGolpe(1, new GolpeCura("Gigadreno", 25, 25));
    }
}

int PokemonPlanta::calcularDanoRecebido (int damage, string type) {
    if (type == "Fogo") {
        return std::max(1, (int)round (damage*2.0));
    } else if (type == "Agua") {
        return std::max(1, (int)round (damage*0.5));
    } else 
        return std::max(1, (int)round (damage*1.0));
}