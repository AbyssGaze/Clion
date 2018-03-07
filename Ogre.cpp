//
// Created by Y.Chen on 18/3/7.
//

#include "Ogre.h"

Ogre::Ogre(int size, const std::string &name) : Monster(size, name) {}

void Ogre::eat() {
    power += 500;
}
