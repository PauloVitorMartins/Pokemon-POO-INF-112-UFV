#include "golpeCura.hpp"

GolpeCura::GolpeCura(string name, int power, int quantity):Golpe(name) {
    poder = power; quantidade = quantity;
};

string GolpeCura::aplicar(Pokemon& attacker, Pokemon& target) {
   int dano = calcularDano(attacker, target, poder);
   int danoEfetivo = target.perderVida(dano);
   int curaEfetiva = attacker.curar(quantidade);

    return ("O pokemon " + attacker.getNome() + " usou o golpe " + getNome() + " e infligiu " + 
    std::to_string(danoEfetivo) + " de dano no adversario " + target.getNome() + ". Além disso, o atacante se curou " + std::to_string(curaEfetiva) +
     " pontos de vida.");
};