#pragma once

#include <iostream>
#include <string>
#include "personagem.hpp"
using namespace std;

class Lobo : public Personagem {

    public:

    Lobo() : Personagem(
        "Lobo",
        40,
        0,
        13,
        5,
        1,
        10,
        8)
    {
    }
};