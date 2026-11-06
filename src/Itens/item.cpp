#include "Item.hpp"

Item::Item(string name) {
    nome = name;
}

string Item::getNome() {
    return nome;
}

Item::~Item() {}