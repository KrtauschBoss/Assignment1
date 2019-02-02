//File: BattleAxe.h

#include <string>
#include "Weapon.h"

#ifndef BATTLEAXE_H
#define BATTLEAXE_H

class: BattleAxe : public Weapon
{
    BattleAxe() : Weapon("Battle Axe", 55.0) {}

    virtual ~BattleAxe() {}

    virtual double hit(double armor);
};

#endif //BATTLEAXE_H
