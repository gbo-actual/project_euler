#!/usr/bin/env python

# find the 10,001st prime number

# consider an odd number p after 2
# see if p divides by any of your previously found primes, in increasing order
# check up to sqrt(p) because any factor below sqrt(p) wouild have a corresponding factor above sqrt(p)
# for decimal errors, can round up

import time
start_time = time.time()

import math

prime_limit = 10001 # the nth prime we are looking for
prime_list = [2, 3, 5, 7, 11, 13] # these are the givens in the problem, chosen to start from the prime after 13
p = prime_list[-1] + 2 # start at the last known prime + 2, assume we don't know the next one

while len(prime_list) < prime_limit: # loop until we have the specified amount of primes
    p_is_prime = True # assume p is prime unless proven otherwise
    factor_limit = math.ceil(math.sqrt(p)) # set the limit on how high up the list of primes we will test
    prime_index = 1 # start at 3; even numbers are already not prime

    while p_is_prime == True and prime_list[prime_index] <= factor_limit: # check if p is still possibly prime and we have not tested up to the square root yet
        remainder = p % prime_list[prime_index] # get the remainder from the division
        if remainder == 0: # if one of our prime numbers divides p
            p_is_prime = False # p is not prime, and exits loop

        else:
            prime_index += 1 # go to the next prime in the list

    if p_is_prime == True: # if p is still prime after all of our factorisation tests
        prime_list.append(p) # add p to the list of primes
        #print "Prime # %d: %d" % (len(prime_list), p) # print the prime we just found

    p += 2 # increment p by 2 to the next odd number

print "The %d th prime is %d." % (prime_limit, prime_list[-1])
print("--- %s seconds ---" % (time.time() - start_time))
