/* 
 * File:   CrazyRandomSword.cpp
 * Author: Jessica Kent <jessica.kent37@gmail.com>
 *
 * Created on February 2nd, 2019.
 */

#include "CrazyRandomSword.h"

CrazyRandomSword::CrazyRandomSword()
{
	int randomNumber = rand() % 94 + 7; //generate random number between 7-100
	double random = randomNumber + 0.0;
	
	//call Weapon constructor
	Weapon("Crazy random sword", random);
	
}

double CrazyRandomSword::hit(double armor) { //ignore a random number of points
	int randomNumber = rand()%(armor*.3333) + 2;
	
    double damage = hitpoints - randomNumber;
 
    return damage;
}
