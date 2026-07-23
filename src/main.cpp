#include <iostream>
#include <string>
#include "personagem.hpp"
#include "goblin.hpp"
#include "orc.hpp"
#include "floresta.hpp"
#include "batalha.hpp"
using namespace std;

void MenuPrincipal(){


    cout << "\n==== Menu ====" << endl;
    cout << "=========================" << endl;
    cout << "O que gostaria de fazer? " << endl;
    cout << "1 - Ver status" << endl;
    cout << "2 - Explorar a floresta" << endl;
    cout << "3 - Descansar na estalagem" << endl;
    cout << "4 - Sair" << endl;

}

void ExplorarFloresta(Personagem& jogador){

    Floresta floresta;
    floresta.Explorar(jogador);
}

int main(){

    cout << "===== Final Fantasy Text RPG Game ======" << endl;
    string nome;
    cout << "\nDigite o seu nome: ";
    cin >> nome;
    cout << "Bem-vindo " << nome << "!" << endl;
    cout << "Sua aventura está prestes a começar :)" << endl;

    Personagem jogador {
        nome,
        100,
        8,
        15,
        10,
        1,
        0,
        50
    };

    int opcao;

    do
    {

        MenuPrincipal();

        cout << "Escolha uma opção: ";
        cin >> opcao;

        switch (opcao)
        {
        case 1:
            jogador.MostrarStatus();
            break;
        case 2:
            Floresta floresta;
            floresta.Explorar(jogador);
            cout << endl;
            break;
        case 3:
            jogador.Descansar();
            cout << endl;
            break;
        case 4:
            cout << "Saindo..." << endl;
            cout << endl;
            break;
        default:
            cout << "Opção inválida, digite um numero valido" << endl;
            cout << endl;
            break;
        }
    } while (opcao != 4);
    
}