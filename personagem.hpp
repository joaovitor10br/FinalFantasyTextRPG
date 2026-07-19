#pragma once

#include <iostream>
#include <string>
using namespace std;

class Personagem{

    public:
    string nome;
    int hp;
    int mp;
    int ataque;
    int defesa;
    int nivel;
    int xp;
    int ouro;
    
    Personagem(string nome, int hp, int mp, 
        int ataque, int defesa, 
        int nivel, int xp, int ouro)

      : nome(nome),
        hp(hp),
        mp(mp),
        ataque(ataque),
        defesa(defesa),
        nivel(nivel),
        xp(xp),
        ouro(ouro)

    {
    }
    
    int CalcularDano(const Personagem& inimigo) const{

    int dano = ataque - inimigo.defesa;

    if (dano < 1)
    {
        dano = 1;
    }

    return dano;

    };

    void ReceberDano(int dano){

        hp -= dano;

        if (hp < 0)
        {
            hp = 0;
        }
                
    };

    bool EstadoVivo() const{

        return hp > 0;
    };

    void MostrarStatus() const{

    cout << "Nome: " << nome << endl;
    cout << "HP: " <<  hp << endl;
    cout << "MP: " << mp << endl;
    cout << "Ataque: " << ataque << endl;
    cout << "Defesa: " << defesa << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "XP: " << xp << endl;
    cout << "Ouro: " << ouro << endl;
    };

    void Descansar(){

        hp = 100;
        mp = 8;

        cout << nome << " entrou na hospedaria" << endl;
        cout << "HP e MP restaurados";

        MostrarStatus();
    };

    void Atacar(Personagem& inimigo){

        int dano = CalcularDano(inimigo);

        cout << nome << " atacou." << inimigo.nome << "!" << endl;

        inimigo.ReceberDano(dano);

        if (!inimigo.EstadoVivo())
        {
            cout << "O inimigo " << inimigo.nome << " foi derrotado" << endl;
        }
    };
};