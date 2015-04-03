/* 
 * File:   p4.cpp
 * Author: gbo
 * Find the largest palindrome product of 3-digit numbers.
 * Created on April 2, 2015, 7:17 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include "p4.h"

int maxPalindrome = -1; // initialize

/*
 * 
 */
int main(int argc, char** argv) {
    
    int product;
    int productReversal;
    int maxFactor1 = 1;
    int maxFactor2 = 1;
    
    for (int i = 999; i >= 100; i--)
    {
        for (int j = i; j >= 100; j--)
        {
            product = i*j; // get the product
            
            
            productReversal = getReversal(product); // reverse the digits
            std::cout << "Product: " << product << "  " << "Reversal: " << productReversal << std::endl; // debug
            
            if (product == productReversal)
            {
                std::cout << "Reversal found!" << std::endl;
                if(product > maxPalindrome)
                {
                    maxPalindrome = product;  
                    maxFactor1 = i;
                    maxFactor2 = j;
                }
                    
            }
        }
    }
    
    std::cout << "Max palindrome: " << maxPalindrome << std::endl;
    std::cout << "Factors: " << maxFactor1 << " and " << maxFactor2 << std::endl;

    return 0;
}

