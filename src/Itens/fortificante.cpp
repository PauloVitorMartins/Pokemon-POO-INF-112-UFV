#include "Fortificante.hpp"

Fortificante::Fortificante() : Item("Fortificante") {

}

bool Fortificante::usar(Pokemon& target) {
    return target.fortalecer();
}