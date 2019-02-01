//File: CrazyRandomSword.cpp

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor)
{
    int arm = armor/3;
    double damage = hitPoints - (armor - (rand() % arm + 2));

    return damage;
}
