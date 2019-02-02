//File: BattleAxe.cpp

#include "BattleAxe.h"

double BattleAxe::hit(double armor)
{
    double damage = hitPoints - ((armor/2)/2);

    if(damage < 0)
	return 0;

    return damage;
}
