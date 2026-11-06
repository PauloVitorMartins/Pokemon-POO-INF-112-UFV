#include "PokemonFogo.hpp"
#include "GolpeDano.hpp"
#include "GolpeReducao.hpp"
#include "GolpeCura.hpp"

PokemonFogo::PokemonFogo(string nome, int idPokemon, int vida, int ataque, int defesa) 
    : Pokemon(nome, idPokemon, vida, ataque, defesa, "Fogo") {

    // Moveset específico baseado no nome do Pokémon lido do arquivo
    if (nome == "Charmander" || nome == "Charizard") {
        definirGolpe(0, new GolpeDano("Lança-Chamas", 40));
        definirGolpe(1, new GolpeReducaoAtaque("Cara Assustadora", 10)); // Reduz ataque inimigo
        
    } else if (nome == "Vulpix" || nome == "Ninetales") {
        definirGolpe(0, new GolpeDano("Fogo Fátuo", 25));
        definirGolpe(1, new GolpeCura("Fogo Místico", 20, 15)); // Causa dano e cura
        
    } else if (nome == "Arcanine" || nome == "Growlithe") {
        definirGolpe(0, new GolpeDano("Roda de Fogo", 50)); // Dano bruto alto
        definirGolpe(1, new GolpeDano("Mordida", 30)); 
        
    } else {
        // Moveset padrão caso seja um Pokémon de Fogo desconhecido
        //definirGolpe(0, new GolpeDano("Brasa", 30));
        //(1, new GolpeReducaoAtaque("Fumaça", 5));
    }
}

int PokemonFogo::calcularDanoRecebido (int damage, string type) {
    if (type == "Agua") {
        return std::max(1, (int)round (damage*2.0));
    } else if (type == "Planta") {
        return std::max(1, (int)round (damage*0.5));
    } else 
        return std::max(1, (int)round (damage*1.0));
}