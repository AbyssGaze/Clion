//
// Created by Y.Chen on 18/3/7.
//

#ifndef CLION_ZOMBI_H
#define CLION_ZOMBI_H


#include "Monster.h"

class Zombi : public Monster{
public:
    Zombi(int size, const std::string &name);

    void eat() override;

    void fight();

    void makeNoise();
};


#endif //CLION_ZOMBI_H
