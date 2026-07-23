#pragma once

#include <iostream>
#include <string>
#include "personagem.hpp"

class Orc : public Personagem {
    
    public:

    Orc() : Personagem(
        "Orc", 
        70, 
        18, 
        8, 
        20, 
        2, 
        20, 
        15)
    {
    }
};