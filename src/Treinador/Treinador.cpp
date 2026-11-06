#include "treinador.hpp"
#include <fstream>
#include <ostream>

#include "pokemonAgua.hpp"
#include "pokemonEletrico.hpp"
#include "pokemonPlanta.hpp"
#include "pokemonFogo.hpp"

#include "cura.hpp"
#include "fortificante.hpp"

Treinador::Treinador(string name, int pokemons[3]) {
    /* 
    ==============================================================
    Implementação fornecida: leitura do arquivo e criação da equipe
    Complete o construtor com a inicialização dos demais atributos
    ==============================================================
    */

    for (int indice = 0; indice < 3; indice++) {
        equipe[indice] = nullptr;
    }

    std::ifstream arquivo("../pokemons.txt");

    int id, vida, ataque, defesa;
    string tipo, nomePokemon;
    while (arquivo >> id >> tipo >> nomePokemon >> vida >> ataque >> defesa) {
        for (int indice = 0; indice < 3; indice++) {
            if (pokemons[indice] != id || equipe[indice] != nullptr) continue;

            if (tipo == "fogo") {
                equipe[indice] = new PokemonFogo(nomePokemon, id, vida, ataque, defesa);
            } else if (tipo == "agua") {
                equipe[indice] = new PokemonAgua(nomePokemon, id, vida, ataque, defesa);
            } else if (tipo == "planta") {
                equipe[indice] = new PokemonPlanta(nomePokemon, id, vida, ataque, defesa);
            } else if (tipo == "eletrico") {
                equipe[indice] = new PokemonEletrico(nomePokemon, id, vida, ataque, defesa);
            }
        }
    }

    ativo = 0;
    nome = name;
    Cura* cura =  new Cura;
    Fortificante* fortificante = new Fortificante;
    itens[0] = cura;
    itens[1] = fortificante;
}

Treinador::~Treinador() {
    for (int i = 0; i < 3; i++) {
        delete equipe[i];
    }
    delete itens[0]; delete itens[1];
}

string Treinador::getNome() {
    return nome;
}

Pokemon* Treinador::getAtivo() {
    return equipe[ativo];
}

Pokemon* Treinador::getPokemon(int index) {
    if (index < 0 || index > 2) {
        return nullptr;
    } else 
        return equipe[index];
}

Item* Treinador::getItem(int index) {
    if (index < 0 || index > 1) {
        return nullptr;
    } else 
        return itens[index];
}

int Treinador::getIndiceAtivo() {
    return ativo;
}

bool Treinador::trocar (int index) {
    if (index < 0 || index > 2 || !equipe[index] || equipe[index]->derrotado() || index == ativo) return false;
    else {
        ativo = index;
        return true;
    }
}

bool Treinador::perdeu() {
    for (int i = 0; i < 3; i++) {
        if (!equipe[i]->derrotado()) return false;
    }
    return true;
}

bool Treinador::usarItem(int index, int alvo) {
    if (index < 0 || index > 1 || !itens[index] || !getPokemon(alvo)) return false; 
    else {
       if(itens[index]->usar(*getPokemon(alvo)) == true) {
        delete itens[index];
        itens[index] = nullptr;
        return true;
       } else return false;
    }
}
