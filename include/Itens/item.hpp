#ifndef ITEM_HPP
#define ITEM_HPP

#include "pokemon.hpp"

class Item {
    private:
        string nome;

    public:
        Item(string nome);
        virtual ~Item();
        string getNome();
        virtual bool usar(Pokemon& target) = 0;
};

#endif