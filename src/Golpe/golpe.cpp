#include "golpe.hpp"

Golpe::Golpe(string name) { nome = name; }
Golpe::~Golpe() {}

int Golpe::calcularDano(Pokemon& attacker, Pokemon& target, int poder) {
    //calcula o dano base com base no poder do ataque e atributos de ataque e defesa do pokemon
    int danoBase = std::max(1, poder + attacker.getAtaque() - target.getDefesa());
    //pega o dano base e tira dele a reducao de ataque que pode ser nula ou ate 8
    danoBase = std::max(0, danoBase - attacker.consumirReducaoAtaque());
    //transforma o dano base em um dano adaptado com o modificador do tipo de cada pokemon
    danoBase = target.calcularDanoRecebido(danoBase, attacker.getTipo());
    //faz o dano base * o fortalecimento que pode retornar dano*1.0 (nao fortalecido) ou dano*1.1(fortalecido)
    danoBase = std::max(1, (int)round(danoBase*attacker.consumirFortalecimento()));



   return danoBase;
}

string Golpe::getNome() {
    return nome;
}
