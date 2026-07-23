#pragma once
#include <string>

class Personagem{

public:

    std::string nome;
    int hp;
    int mp;
    int ataque;
    int defesa;
    int nivel;
    int xp;
    int ouro;

    Personagem(
        string nome,
        int hp,
        int mp,
        int ataque,
        int defesa,
        int nivel,
        int xp,
        int ouro
    );

    int CalcularDano(const Personagem& inimigo) const;
    void ReceberDano(int dano);
    bool EstadoVivo() const;
    void MostrarStatus() const;
    void Descansar();
    void Atacar(Personagem& inimigo);
    void GanharXP(int quantidade);
};