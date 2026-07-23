#include "../include/batalha.hpp"
#include <iostream>
using namespace std;

int Batalha::EscolherAcao(){

    int escolher;

    cout << "O que gostaria de fazer? " << endl;
    cout << "1- Atacar" << endl;
    cout << "2 - Fugir" << endl;
    cout << "Escolha sua opção: " << endl;
    cin >> escolher;

    return escolher;

}

bool Batalha::IniciarBatalha(Personagem& jogador, Personagem& inimigo){

    bool fugir = false;

   while (jogador.EstadoVivo() && inimigo.EstadoVivo() && !fugir)
   {
        int EscolhaJogador = EscolherAcao();

        switch (EscolhaJogador)
        {
        case 1:
        {
            jogador.Atacar(inimigo);

            inimigo.MostrarStatus();

            if (inimigo.EstadoVivo())
            {
                inimigo.Atacar(jogador);

                jogador.MostrarStatus();
            }

            break;
        }
        case 2:
            cout << jogador.nome << " fugiu" << endl;
            fugir = true;
            break;
        default:
            cout << "Opção inválida";
            break;
        }
   }

   if (!inimigo.EstadoVivo())
   {
        cout << jogador.nome << " venceu!" << endl;
        jogador.GanharXP(inimigo.xp);
        return true;
   }

   return false;
   
}