#ifndef CURA_HPP
#define CURA_HPP

#include "item.hpp"

class Cura: public Item {
    public:
        Cura();
        bool usar(Pokemon& alvo) override;
};

#endif