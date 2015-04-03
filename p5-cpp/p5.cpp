/* 
 * File:   p5.cpp
 * Author: gbo
 * // Find smallest number evenly divisible by all integers from 1 to 20.
 * Created on April 2, 2015, 8:01 PM
 */

#include <cstdlib>
#include <iostream>
#include <cmath>
#include "../header/projecteuler_gbo.h"

bool passP5 = false; // initialize
/*
 * 
 */
int main(int argc, char** argv) {
    
    int target = 20;
    
    std::vector<int> integerList(target);
    std::iota(integerList.begin(), integerList.end(), 1); // fill with numbers from 1-20
    
    int leastCommonMultiple = getLCM(integerList);
    
    std::cout << "Least common multiple of integers 1 to " << target << ": " << leastCommonMultiple << std::endl;
    
    return 0;
}

