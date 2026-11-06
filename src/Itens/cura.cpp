#include "Cura.hpp"

Cura::Cura() : Item("Cura") {

}

bool Cura::usar(Pokemon& target) {
    if (target.getVida() == target.getVidaMaxima() || target.derrotado()) 
        return false;
    else {
        target.curar(20);
        return true;
    }
    
    
}