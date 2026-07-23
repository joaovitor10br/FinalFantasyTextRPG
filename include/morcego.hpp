#pragma once
#include "personagem.hpp"

class Morcego : public Personagem {

    public:
        Morcego()
        : Personagem(
            "Morcego",
            30,
            10,
            14,
            6,
            2,
            7,
            10)
    {
    }
};