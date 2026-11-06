#include "pokemon.hpp"

Pokemon::Pokemon(string name, int id, int life, int attack, int defense, string type) {
    nome = name; idPokemon = id; vidaMaxima = life; vida = life; ataque = attack; defesa = defense; tipo = type; golpes[0] = nullptr; golpes[1] = nullptr;
    reducaoProximoAtaque = 0; fortalecido = false;
};

//getters
int Pokemon::getAtaque() {
    return ataque;
}

int Pokemon::getDefesa() {
    return defesa;
}

Golpe* Pokemon::getGolpe(int i) {
    if (i > 1 || i < 0) {
        return nullptr;
    } else if (!golpes[i]) {
        return nullptr;
    } else 
    return golpes[i];
}

int Pokemon::getIdPokemon() {
    return idPokemon;
}

string Pokemon::getNome() {
    return nome;
}

string Pokemon::getTipo() {
    return tipo;
}

int Pokemon::getVida() {
    return vida;
}

int Pokemon::getVidaMaxima() {
    return vidaMaxima;
}

bool Pokemon::derrotado() {
    if (vida <= 0) return true; else return false;
}

void Pokemon::definirGolpe(int index, Golpe* move) {
    if (index > 1 || index < 0) {
        delete move; //retorna nada quando index e invalido e deleta o golpe passado da memoria
        return;
    } else {
        delete golpes[index]; //deleta o golpe antigo
        golpes[index] = move;
    }
}

int Pokemon::perderVida(int quantity) {
    if (quantity < 0) {
        return 0;
    }
    int vidaPerdidaTemp = vida - quantity;
    if (vidaPerdidaTemp < 0) {
        vida = 0;
        return quantity + vidaPerdidaTemp;
    } else {
        vida = vidaPerdidaTemp;
        return quantity;
    }
}

int Pokemon::curar(int quantity) {
    if (derrotado()) 
        return 0;
    else if (quantity < 0)
        return 0;
    else {
        int vidaAnterior = vida;
        vida = std::min(vidaMaxima, vida + quantity);
        return vida - vidaAnterior;
    }
}

//acabei fazendo duas logicas diferentes para o valor efetivo de curar e perder vida, mas ambas retornam o valor real curado ou perdido
//a segunda me parece mais elegante, enquanto a primeira depende menos de coisas ja prontas

void Pokemon::reduzirAtaque(int quantity) {
    if (quantity < 0)
        return;
    else reducaoProximoAtaque = quantity;
}


