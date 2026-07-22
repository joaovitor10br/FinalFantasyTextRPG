#pragma once

#include <iostream>
#include <string>
#include "personagem.hpp"
using namespace std;

class Lobo : public Personagem {

    public:

    Lobo() : Personagem(
        "Lobo",
        10,
        5,
        5,
        3,
        1,
        2,
        10)
    {
    }
};