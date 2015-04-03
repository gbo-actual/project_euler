// Project Euler
// Problem 2
// Each new term in the Fibonacci sequence is generated by adding the previous two terms. By starting with 1 and 2, the first 10 terms will be:
// 1, 2, 3, 5, 8, 13, 21, 34, 55, 89, ...
// By considering the terms in the Fibonacci sequence whose values do not exceed four million, find the sum of the even-valued terms.

#include <iostream>
#include <stdio.h>
#include <cmath>

int main()
{
  int sumEvenFibonacci = 2; // init to 2 because it starts before the first generatable term
  // generate fibonacci numbers
  int fiboPrev1 = 1;
  int fiboPrev2 = 2;
  int fibonacci = 3;
  while (fibonacci <= 4000000)
  {
    // generate fibonacci number
    fibonacci = fiboPrev1 + fiboPrev2;
    
    // check if the generated number is even
    if (fibonacci % 2 == 0)
    {
      sumEvenFibonacci += fibonacci; // add it to the sum
    }
    
    // set up the next iteration
    fiboPrev1 = fiboPrev2;
    fiboPrev2 = fibonacci;
    
  }
  
  // return the sum
  std::cout << "The sum of all even Fibonacci numbers below 4000000 is " << sumEvenFibonacci << "\n";
  
  return 0;
}