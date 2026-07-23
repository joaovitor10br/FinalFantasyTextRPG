#include "floresta.hpp"
#include "goblin.hpp"
#include "orc.hpp"
#include "lobo.hpp"
#include "batalha.hpp"

#include <iostream>
using namespace std;

void Floresta::Explorar(Personagem& jogador){

    cout << jogador.nome << " entrou na floresta" << endl;
    cout << "Um goblin apareceu!" << endl;
    cout << endl;

    Goblin goblin;
    Lobo lobo;
    Batalha batalha;

    if (batalha.IniciarBatalha(jogador, goblin))
    {
        cout << "Um lobo apareceu!" << endl;
        cout << endl;

        lobo.MostrarStatus();
        batalha.IniciarBatalha(jogador, lobo);

        if (batalha.IniciarBatalha(jogador, lobo))
    {
        cout << "Um orc apareceu!" << endl;
        cout << endl;

        Orc orc;
        orc.MostrarStatus();
        batalha.IniciarBatalha(jogador, orc);
    }
    }
    
    
}