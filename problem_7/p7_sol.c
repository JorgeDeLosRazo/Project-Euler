/*
    PROBLEM STATEMENT: By listing the first six prime numbers: 2, 3, 5, 7, 11, and 13, we can see that 
    the 6th prime is 13.
    What is the 10,001st prime number?

    OBSERVSATIONS:
        - The primes are a subset of the odd integers, so we can parse through the odd numbers only (ignore the evens)
          to find the first 10,001 primes.
        - According to the Fundamental Theorem of Arithmetic, any compound integer can be represented as
          the product of primes. 

    EXPLANATION OF CODE: 
    The code will parse through all the odd integers until the primes[] array is full of primes. 
    The program will determine if a number is prime by dividing it by the primes[] elements thus far
        - Variables:
            primes[] - Stores the first 10,001 primes.
                 k   - Is assigned with the current odd integer being evaluated.
        array_index  - If primes[i] has just been assigned with a prime, then array_index = i + 1.
    multiplier_counter - If the k value is divisible by one of the primes stored thus far, then add one.
                         to the multiplier_counter. The counter is reset (multiplier_counter = 0) after each
                         loop iteration.
                
*/
#include<stdio.h>

#define ARRAY_SIZE 10001
int main(){

    int primes[ARRAY_SIZE] = {0};
    int k = 3;
    int array_index = 1;
    int multiplier_counter = 0;

    primes[0] = 2;

    while(primes[ARRAY_SIZE - 1] == 0){
        multiplier_counter = 0;

        for(int i = 0; i < array_index; i++){
            if(k % primes[i] == 0){
                multiplier_counter += 1;
            }
        }
        if(multiplier_counter == 0){
            primes[array_index] = k;
            array_index++;
        }
        k += 2;
    }
    printf("%dst prime: %d\n", array_index, primes[array_index - 1]);

}