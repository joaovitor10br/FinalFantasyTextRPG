#pragma once

#include "personagem.hpp"

class Batalha {

    public:
        int EscolherAcao();
        bool IniciarBatalha(Personagem& jogador, Personagem& inimigo);
};