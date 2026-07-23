#pragma once


#include "personagem.hpp"

class Goblin : public Personagem{

    public:
        Goblin() 
        : Personagem(
            "Goblin", 
            25, 
            0, 
            12, 
            3, 
            1, 
            6, 
            5)
    {
    }
};