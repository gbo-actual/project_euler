/* 
 * File:   p3.h
 * Author: gbo
 * Header file for problem 3.
 * Created on April 2, 2015, 2:06 PM
 */

#ifndef P3_H
#define	P3_H

#include <cstdlib>
#include <iostream>
#include <cmath>
#include <vector>
#include <numeric>
#include <stdint.h>

std::vector<uint64_t> generatePrimes(uint64_t maxValue)
{
    // here, use Sieve of Eratosthenes
    std::vector<uint64_t> primeList(maxValue-1);
    primeList[0] = 2; // load first prime
    std::iota(primeList.begin(), primeList.end(), primeList[0]); // fill with numbers from 2 to maxValue
    
    // eliminate primes 
    for (uint64_t i = 0; i < primeList.size(); i++) // 
    {
        // iterate through vector
        for(uint64_t j = i+1; j < primeList.size(); j++) // look at the entry after i
        {
            if(primeList[j] % primeList[i] == 0) // if the i entry is a divisor of the j entry
            {
                primeList.erase(primeList.begin() + j); // erase the j entry
                j--; // roll back j
            }
        }
    }
    
    // debug
    /*
    std::cout << "Primes: " << std::endl;
    
    for (uint64_t i = 0; i < primeList.size(); i++)
    {    
        std::cout << primeList[i] << std::endl;
    }
    */
    
    // return
    return primeList;
}



#endif	/* P3_H */

