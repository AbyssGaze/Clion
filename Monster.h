//
// Created by Y.Chen on 18/3/7.
//

#ifndef CLION_MONSTER_H
#define CLION_MONSTER_H


#include <string>
#include <ostream>

class Monster {
    std::string name;
protected:
    int power = 100;
    int score = 0;
    int size;
public:
    int getSize() const;
    virtual void eat()= 0;

    void setSize(int size);

    const std::string &getName() const;

    bool operator<(const Monster &rhs) const;

    friend std::ostream &operator<<(std::ostream &os, const Monster &monster);

    bool operator>(const Monster &rhs) const;

    bool operator<=(const Monster &rhs) const;

    bool operator>=(const Monster &rhs) const;

    bool operator==(const Monster &rhs) const;

    bool operator!=(const Monster &rhs) const;

    std::string setName(const std::string &name);

    Monster(int size, const std::string &name);
};


#endif //CLION_MONSTER_H
