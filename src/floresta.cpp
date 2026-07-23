#include "floresta.hpp"
#include "goblin.hpp"
#include "orc.hpp"
#include "batalha.hpp"

#include <iostream>
using namespace std;

void Floresta::Explorar(Personagem& jogador){

    cout << jogador.nome << " entrou na floresta" << endl;
    cout << "Um goblin apareceu!" << endl;
    cout << endl;

    Goblin goblin;
    Batalha batalha;

    if (batalha.IniciarBatalha(jogador, goblin))
    {
        cout << "Um orc apareceu!" << endl;
        cout << endl;

        Orc orc;
        orc.MostrarStatus();
        batalha.IniciarBatalha(jogador, orc);
    }
    
}