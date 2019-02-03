/* 
 * File:   MyJavelin.cpp
 * Author: Jessica Kent <jessica.kent37@gmail.com>
 *
 * Created on February 2nd, 2019.
 */

#include "MyJavelin.h"

double MyJavelin::hit(double armor) {
    double damage = hitpoints;
    if (armor > 50.0) {
        return damage*0.5;
    }
    return damage;
}
