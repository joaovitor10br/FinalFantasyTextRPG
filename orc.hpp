#pragma once

#include <iostream>
#include <string>
#include "personagem.hpp"
using namespace std;

class Orc : public Personagem {
    
    public:

    Orc() : Personagem(
        "Orc", 
        100, 
        20, 
        30, 
        40, 
        2, 
        10, 
        45)
    {
    }
};