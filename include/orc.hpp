#pragma once

#include <iostream>
#include <string>
#include "personagem.hpp"

class Orc : public Personagem {
    
    public:

    Orc() : Personagem(
        "Orc", 
        55, 
        0, 
        16, 
        10, 
        2, 
        20, 
        15)
    {
    }
};