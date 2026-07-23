#pragma once

#include <iostream>
#include <string>
#include "personagem.hpp"
using namespace std;

class Orc : public Personagem {
    
    public:

    Orc() : Personagem(
        "Orc", 
        120, 
        20, 
        25, 
        10, 
        2, 
        30, 
        50)
    {
    }
};