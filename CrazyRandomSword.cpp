//File: CrazyRandomSword.cpp

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
    int arm = armor/3;
    double damage = hitPoints - (armor - (rand() % arm + 2));

    if(damage < 0)
	return 0;
    return damage;
}
