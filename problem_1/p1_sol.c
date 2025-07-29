/*
    PROBLEM STATEMENT: If we list all the natural numbers below 10 that are multiples of 3 or 5, 
    we get 3, 5, 6, and 9. The sum of these multiples is 23.
    Find the sum of all the multiples of 3 or 5 below 1000.

    THOUGHT PROCESS: We can parse through all the natural numbers n (0 <= n < 1000) and store all the values
    that are either mutliples of 3 or multiples of 5. Very simple when using code but it can also be done without
    writing a script.
*/
#include<stdio.h>

int main(){
    const int NUMS = 1000;
    int mults_of_three_or_five = 0;
    int mults_of_fifteen = 0;
    int sum = 0;

    for(int i = 0; i < NUMS; i++){
        if(i % 3 == 0 || i % 5 == 0){
            sum += i;
        }
    }
    printf("Sums of multiples of 3 or 5 (for numbers between 0 <= n < 1000): %d\n", sum);
}