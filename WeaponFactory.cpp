/* 
 * File:   WeaponFactory.cpp
 * Author: Javier <jrescobara@gmail.com>
 *  
 */ 

#include <string>
#include <stddef.h> 
#include "WeaponFactory.h"
#include "CommonSword.h" 
#include "CommonSpear.h"
#include "SimpleHammer.h"
#include "CrazyRandomSword.h"
#include "BattleAxe.h"
#include <cstdlib>
#include <ctime>
WeaponFactory* WeaponFactory::instance = NULL;

WeaponFactory * WeaponFactory::getInstance() {
    if (!instance) {
        instance = new WeaponFactory();
    }
    return instance;
}

Weapon * WeaponFactory::getWeapon(std::string name) {
    if (name.compare("sword") == 0) {
        return new CommonSword();
    }
    
    if (name.compare("spear") == 0) {
        return new CommonSpear();
    }

    if (name.compare("hammer") == 0) {
	return new SimpleHammer();
    }

    if (name.compare("Crazy random sword") == 0){
	// psuedo RNG from Bob Myers notes
	srand(time(0));
	return new CrazyRandomSword(rand() % 94 + 7.0);
    }

    if (name.compare("Battle axe") == 0){
	return new BattleAxe();
    }

    throw "Invalid weapon";
}
