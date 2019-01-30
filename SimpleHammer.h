//File:   SimpleHammer.h
#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

//Defines behavior of SimpleHammer(ignores armor if less than 30)
class CommonSpear : public Weapon 
{
public:

    SimpleHammer() : Weapon("Simple hammer", 25.0) {}

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif //SIMPLEHAMMER_H 

