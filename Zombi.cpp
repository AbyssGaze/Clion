//
// Created by Y.Chen on 18/3/7.
//

#include <iostream>
#include "Zombi.h"

Zombi::Zombi(int size, const std::string &name) : Monster(size, name) {}

void Zombi::eat() {
    power = 1000;

}

void Zombi::fight() {
    const auto powerIncrement = size * 3;
    if (power > powerIncrement) {
        power -= powerIncrement;
        score += powerIncrement;
    }


}

void Zombi::makeNoise() {
    std::cout << "dfa" << std::endl;
}

