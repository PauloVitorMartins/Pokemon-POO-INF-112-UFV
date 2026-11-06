#ifndef FORTIFICANTE_HPP
#define FORTIFICANTE_HPP

#include "Item.hpp"

class Fortificante:public Item {
    public:
        Fortificante();
        bool usar(Pokemon& target) override;
};


#endif