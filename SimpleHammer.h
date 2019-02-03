/* 
 * File:   SimpleHammer.h
 * Author: Jessica Kent <jessica.kent37@gmail.com>
 *
 * Created on February 2nd, 2019.
 */

#include <string>
#include "Weapon.h"

#ifndef SIMPLEHAMMER_H
#define SIMPLEHAMMER_H

/**
 * Defines the behavior of a simple hammer (hitpoint = 25, ignores 100% of 
 * armor points if armor is less than 30)
 */
class SimpleHammer : public Weapon {
public:

    SimpleHammer() : Weapon("Simple hammer", 25.0) { //Calls Weapon(name, hitpoints) constructor 
    }

    virtual ~SimpleHammer() {};

    virtual double hit(double armor);

};

#endif /* SIMPLEHAMMER_H */