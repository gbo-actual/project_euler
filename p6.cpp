/*
 * Project Euler
 * Problem 6 - sum square difference
 * Gabriel Ongpauco, 3 Apr 2015
 * 
 */

#include <cstdlib>
#include <iostream>
#include <cmath>

int main()
{
  // find sum of squares of first 100 natural numbers
  long sumSquares = 0;
  long sumNatural = 0;
  for (int i = 1; i <= 100; i++)
  {
    sumNatural += i;
    sumSquares += i*i;
    
  }
  
  // find square of sum of natural numbers
  long squareSum = sumNatural * sumNatural;
  
  // return difference
  long difference = squareSum - sumSquares;
  
  std::cout << "Sum of squares = " << sumSquares << std::endl;
  std::cout << "Square of sum = " << squareSum << std::endl;
  std::cout << "Difference = " << difference << std::endl;
  
  
  
  
  
  return 0;
}