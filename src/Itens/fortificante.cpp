#include "fortificante.hpp"

Fortficante::Fortficante() : Item("Fortificante") {

}

bool Fortficante::usar(Pokemon& target) {
    return target.fortalecer();
}