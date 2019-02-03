/* 
 * File:   MyJavelin.h
 * Author: Jessica Kent <jessica.kent37@gmail.com>
 *
 * Created on February 2nd, 2019.
 */

#include <string>
#include "Weapon.h"

#ifndef MYJAVELIN_H
#define MYJAVELIN_H

/**
 * Defines the behavior of a javelin (hitpoint = 37, which is my favorite number, and ignores 1/2 of 
 * armor points if armor is more than 50)
 */
class MyJavelin : public Weapon {
public:

    MyJavelin() : Weapon("Javelin", 37.0) { //Calls Weapon(name, hitpoints) constructor 
    }

    virtual ~MyJavelin() {};

    virtual double hit(double armor);

};

#endif /* MYJAVELIN_H */