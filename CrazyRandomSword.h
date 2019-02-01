//File: CrazyRandomSword.h

#include <string>
#include "Weapon.h"
#include <cstdlib>
#include <ctime>

#ifndef CRAZYRANDOMSWORD_H
#define CRAZYRANDOMSWORD_H

class CrazyRandomSword : public Weapon
{
    public:
	CrazyRandomSword();

	virtual ~CrazyRandomSword() {};

	virtual double hit(double armor);
};

#endif //CRAZYRANDOMSWORD_H
