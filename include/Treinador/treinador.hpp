#ifndef TREINADOR_HPP
#define TREINADOR_HPP

#include "pokemon.hpp"
#include "item.hpp"

class Treinador {
    private:
        string nome;
        Pokemon* equipe[3];
        Item* itens[2];
        int ativo;
    
    public:
        Treinador (string nome, int pokemons[3]);
        virtual ~Treinador();
        string getNome();
        Pokemon* getPokemon(int index);
        Pokemon* getAtivo();
        Item* getItem(int index);
        int getIndiceAtivo();
        bool trocar(int index);
        bool perdeu();
        bool usarItem(int item, int alvo);
};

#endif