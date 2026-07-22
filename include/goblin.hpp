#pragma once


#include <iostream>
#include <string>
#include "personagem.hpp"
using namespace std;

class Goblin : public Personagem{

    public:
        Goblin() 
        : Personagem(
            "Goblin", 
            10, 
            0, 
            20, 
            5, 
            1, 
            6, 
            4)
    {
    }
};