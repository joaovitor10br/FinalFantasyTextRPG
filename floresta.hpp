#pragma once
#include <iostream>
#include <string>
#include "personagem.hpp"
#include "goblin.hpp"
using namespace std;

class Floresta {

    public:

        void Explorar(Personagem& jogador){

            cout << jogador.nome << " entrou na floresta" << endl;
            cout << "Um goblin apareceu!" << endl;
            cout << endl;
        }
};