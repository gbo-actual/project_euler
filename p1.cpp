#include <iostream>
#include <cstdlib>
#include <stdio.h>
#include <cmath>

int main()
{
  int sumMultiples = 0; // initialize to 0
  for (int i = 0; i < 1000; i++)
  {
    if ( (i % 3)==0 || (i % 5)==0)
    {
      sumMultiples += i;
    }
  }
  
  std::cout << "The sum of all multiples of 3 and 5 below 1000 is " << sumMultiples;
  
  return 0;
  
}