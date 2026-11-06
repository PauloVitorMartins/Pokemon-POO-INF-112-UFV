#ifndef TREINADOR_HPP
#define TREINADOR_HPP

#include "Pokemon.hpp"
#include "Item.hpp"

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
        Pokemon* getAtivo() const;
        Item* getItem(int index);
        int getIndiceAtivo();
        bool trocar(int index);
        bool perdeu() const;
        bool usarItem(int item, int alvo);
};

#endif