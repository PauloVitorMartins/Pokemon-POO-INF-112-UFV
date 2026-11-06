#include "golpeReducao.hpp"

GolpeReducaoAtaque::GolpeReducaoAtaque (string name, int power) : Golpe (name) {
    poder = power;
}

string GolpeReducaoAtaque::aplicar (Pokemon& attacker, Pokemon& target) {
    int dano = calcularDano(attacker, target, poder);
    int danoEfetivo = target.perderVida(dano);

    if (target.derrotado()) {
    return ("O pokemon " + attacker.getNome() + " usou o golpe  " + getNome() + " e infligiu " + 
    std::to_string(danoEfetivo) + " de dano no adversario " + target.getNome() + ".");
    } else {
        target.reduzirAtaque(8);
        return ("O pokemon " + attacker.getNome() + " usou o golpe  " + getNome() + " e infligiu " + 
        std::to_string(danoEfetivo) + " de dano no adversario " + target.getNome() + ". Além disso, o alvo perdeu " + "8 pontos de ataque.");
    }
}