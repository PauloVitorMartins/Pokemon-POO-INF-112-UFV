#include "golpeDano.hpp"

GolpeDano::GolpeDano(string name, int power): Golpe(name) {
    poder = power;
};

int GolpeDano::calcularDano(Pokemon& attacker, Pokemon& target, int power) {
    return std::max(1, power + attacker.getAtaque() - target.getDefesa());
};

string GolpeDano::aplicar(Pokemon& attacker, Pokemon& target) {

};