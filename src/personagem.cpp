#include "personagem.hpp"
#include <iostream>
using namespace std;

Personagem::Personagem(
    string nome,
    int hp,
    int mp,
    int ataque,
    int defesa,
    int nivel,
    int xp,
    int ouro
)
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

int Personagem::CalcularDano(const Personagem& inimigo) const{

    int dano = ataque - inimigo.defesa;

    if (dano < 1)
    {
        dano = 1;
    }

    return dano;

};

    void Personagem::ReceberDano(int dano){

        hp -= dano;

        if (hp < 0)
        {
            hp = 0;
        }
                
    };

    bool Personagem::EstadoVivo() const{

        return hp > 0;
    };

    void Personagem::MostrarStatus() const{

    cout << "Nome: " << nome << endl;
    cout << "HP: " <<  hp << endl;
    cout << "MP: " << mp << endl;
    cout << "Ataque: " << ataque << endl;
    cout << "Defesa: " << defesa << endl;
    cout << "Nivel: " << nivel << endl;
    cout << "XP: " << xp << endl;
    cout << "Ouro: " << ouro << endl;
    };

    void Personagem::Descansar(){

        hp = 50 + ((nivel + 1) * 5);
        mp = 20;

        cout << nome << " entrou na hospedaria" << endl;
        cout << "HP e MP restaurados" << endl;

        MostrarStatus();
    };

    void Personagem::Atacar(Personagem& inimigo){

        int dano = CalcularDano(inimigo);

        cout << nome << " atacou " << inimigo.nome << "!" << endl;

        inimigo.ReceberDano(dano);

        if (!inimigo.EstadoVivo())
        {
            cout << "O inimigo " << inimigo.nome << " foi derrotado" << endl;
        }
    };

    void Personagem::GanharXP(int quantidade){

        xp += quantidade;

        cout << nome << " ganhou " << quantidade << " de xp" << endl;

        int XpNecessario;
        XpNecessario = nivel * 10;

        while (xp >= XpNecessario)
        {
            xp -= XpNecessario;
            
            nivel++;

            hp += 5;
            mp += 3;
            ataque += 5;
            defesa += 6;

            cout << nome << " subiu para o nivel: " << nivel << endl;

            XpNecessario = nivel * 10;
        }
        
        
    };