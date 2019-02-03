/* 
 * File:   CrazyRandomSword.cpp
 * Author: Jessica Kent <jessica.kent37@gmail.com>
 *
 * Created on February 2nd, 2019.
 */

#include "CrazyRandomSword.h"

double CrazyRandomSword::hit(double armor) { //ignore a random number of points
	int randomNumber = Random::get(2, armor*0.3333);
	
    double damage = hitpoints - randomNumber;
 
    return damage;
}
