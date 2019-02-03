/* 
 * File:   CrazyRandomSword.h
 * Author: Jessica Kent <jessica.kent37@gmail.com>
 *
 * Created on February 2nd, 2019.
 */

#include <string>
#include "Weapon.h"

#ifndef CRAZYRANDSWORD_H
#define CRAZYRANDSWORD_H

/**
 * Defines the behavior of a crazy random sword (hitpoint = random int between 7-100, ignores random number
	of int armor points, ranging from 2 to 1/3 of armor weapon hits)
 */
class CrazyRandomSword : public Weapon {
public:

    CrazyRandomSword();
	
    virtual ~CrazyRandomSword() {};

    virtual double hit(double armor);

};

#endif /* CRAZYRANDSWORD_H */