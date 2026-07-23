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
    Orc orc;
    Batalha batalha;

    if (batalha.IniciarBatalha(jogador, goblin))
    {
        cout << "Um lobo apareceu!\n\n" << endl;
        cout << endl;

        lobo.MostrarStatus();

        if (batalha.IniciarBatalha(jogador, lobo))
    {
        cout << "Um orc apareceu!\n\n" << endl;
        cout << endl;

        Orc orc;
        orc.MostrarStatus();
        batalha.IniciarBatalha(jogador, orc);
    }
    }
}