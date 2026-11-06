#ifndef FORTIFICANTE_HPP
#define FORTIFICANTE_HPP

#include "item.hpp"

class Fortficante:public Item {
    public:
        Fortficante();
        bool usar(Pokemon& target) override;
};


#endif