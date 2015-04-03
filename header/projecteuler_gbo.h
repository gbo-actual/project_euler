/* 
 * File:   projecteuler_gbo.h
 * Author: gbo
 *
 * Created on April 2, 2015, 7:25 PM
 */

#ifndef PROJECTEULER_GBO_H
#define	PROJECTEULER_GBO_H
#include <iostream>
#include <cmath>
#include <algorithm>
#include <vector>
#include <stdint.h>
#include <numeric>

std::vector<uint64_t> sieveEratosthenes(uint64_t maxValue)
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

// reverse the digits of a number (trailing zeroes discarded)
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

// find GCD between two numbers
int getGCD(int a, int b)
{
    while (b > 0)
    {
        int temp = b;
        b = a % b; // % is remainder
        a = temp;
    }
    return a;
}

int getGCD(std::vector<int>& integerList)
{
    int result = integerList[0];
    
    for(int i = 1; i < integerList.size(); i++) 
        result = getGCD(result, integerList[i]);
    
    return result;
}

int getLCM(long a, long b)
{
    return a * (b / getGCD(a, b));
}

int getLCM(std::vector<int>& input)
{
    int result = input[0];
    for(int i = 1; i < input.size(); i++)
        result = getLCM(result, input[i]);
    return result;
}


#endif	/* PROJECTEULER_GBO_H */
