/* 
 * File:   p4.h
 * Author: gbo
 *
 * Created on April 2, 2015, 7:25 PM
 */

#ifndef P4_H
#define	P4_H
#include <iostream>
#include <cmath>

int getReversal(int _number)
{
    int reversal = 0;
    
    while (_number > 0)
    {
        reversal = 10*reversal + _number % 10;
        _number = _number/10;
    }
    return reversal;
}

#endif	/* P4_H */

