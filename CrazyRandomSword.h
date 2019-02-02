//File: CrazyRandomSword.h

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon
{
    public:
	CrazyRandomSword(double rand):Weapon("Crazy random sword", rand){}

	virtual ~CrazyRandomSword() {};

	virtual double hit(double armor);
};

#endif //CRAZYRANDOMSWORD_H
