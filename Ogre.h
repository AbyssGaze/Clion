//
// Created by Y.Chen on 18/3/7.
//

#ifndef CLION_OGRE_H
#define CLION_OGRE_H


#include "Monster.h"

class Ogre : public Monster{
public:
    Ogre(int size, const std::string &name);

    void eat() override;
};


#endif //CLION_OGRE_H
