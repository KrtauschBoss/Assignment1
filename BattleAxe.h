//File: BattleAxe.h

#include <string>
#include "Weapon.h"

#ifndef BATTLEAXE_H
#define BATTLEAXE_H

class BattleAxe : public Weapon
{
    public:
	BattleAxe() : Weapon("Battle Axe", 55.0) {}

	virtual ~BattleAxe() {}

	//ignores 1/4 of armor points
	virtual double hit(double armor);
};

#endif //BATTLEAXE_H
