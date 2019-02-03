/* 
 * File:   SimpleHammer.cpp
 * Author: Jessica Kent <jessica.kent37@gmail.com>
 *
 * Created on February 2nd, 2019.
 */

#include "SimpleHammer.h"

double SimpleHammer::hit(double armor) {
    double damage = hitpoints;
    if (armor < 30.0) {
        return 0;
    }
    return damage;
}
