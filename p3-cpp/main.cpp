/* 
 * File:   main.cpp
 * Author: gbo
 * Problem 3
 * Created on April 2, 2015, 2:04 PM
 */


#include <iostream>
#include "p3.h"
/*
 * 
 */

uint64_t targetPrime = 600851475143;

int main(int argc, char** argv) 
{
    uint64_t squareRootInt = uint64_t(ceil(sqrt(targetPrime)));
    if (squareRootInt % 2 == 0)
        squareRootInt++; // ensure that it's odd
    
    std::cout << "Target: " << targetPrime << std::endl;
    std::cout << "Square root: " << squareRootInt << std::endl;
    std::cout << "Generating primes up until the square root... ";
    std::vector<uint64_t> primeList = generatePrimes(squareRootInt); // generate primes up to the square root
    std::cout << "Done." << std::endl;
    
    uint64_t maxPrime = -1; // hold the largest prime
    
    std::cout<< "Calculating the largest prime factor of the target..." << std::endl;
    // check if each prime is a factor
    for(int i = 0; i < primeList.size(); i++)
    {
        if(targetPrime % primeList[i] == 0) // does the target divide by the prime?
        {
            maxPrime = primeList[i]; // update the largest prime factor
        }
    }
    
    if(maxPrime < 0) // didn't find any other prime factor
        maxPrime = targetPrime; // the number itself is its largest prime factor
    
    std::cout << "The largest prime factor of " << targetPrime << " is " << maxPrime << std::endl;
    
    return 0;
}