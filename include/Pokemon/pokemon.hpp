#ifndef POKEMON_HPP
#define POKEMON_HPP

#include <iostream>
#include <cmath> 
#include <algorithm>

#include "golpe.hpp"

using std::string;

class Pokemon {
    private:
        string nome;
        string tipo;
        int idPokemon;
        int vida;
        int vidaMaxima;
        int ataque;
        int defesa;
        int reducaoProximoAtaque;
        bool fortalecido;
        //Golpe*[2] golpes; implementar a classe -> Golpe
    public:
        Pokemon (string nome, int idPokemon, int vida, int ataque, int defesa, string tipo);
        virtual ~Pokemon() = 0;
        string getNome();
        int getIdPokemon();
        int getVida();
        int getVidaMaxima();
        int getAtaque();
        int getDefesa();
        string getTipo();
        bool derrotado();
        Golpe* getGolpe(int indice); 
        void definirGolpe(int indice, Golpe* golpe);
        int perderVida(int quantidade);
        int curar(int quantidade);
        void reduzirAtaque(int quantidade);
        int consumirReducaoAtaque();
        bool fortalecer();
        double consumirFortalecimento();
        virtual int calcularDanoRecebido(int dano, string tipoAtaquente) = 0;
};

#endif