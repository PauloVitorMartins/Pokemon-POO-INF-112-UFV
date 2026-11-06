#include "GolpeDano.hpp"

GolpeDano::GolpeDano(string name, int power) : Golpe(name) {
    poder = power;
};

string GolpeDano::aplicar(Pokemon& attacker, Pokemon& target) {
   int dano = calcularDano(attacker, target, poder);
   int danoEfetivo = target.perderVida(dano);
   return ("O pokemon " + attacker.getNome() + " usou o golpe " + getNome() + " e infligiu " + std::to_string(danoEfetivo) + " de dano no adversario " + target.getNome());
};