#include <iostream>
#include "Zombi.h"

int main() {
    Zombi zombi(100, "Bob");
    std::string prevName = zombi.setName("Zed");
    std::string name = zombi.getName();
    zombi.makeNoise();
    return 0;
}