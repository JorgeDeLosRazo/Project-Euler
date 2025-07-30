#include<stdio.h>

#define MAX_NUM 4000000 //Four million

int main(){
    int phi[2];
    int temp = 0;
    int sum = 0;

    phi[0] = 1;
    phi[1] = 1;
    
    do{  
        temp = phi[0] + phi[1];
        phi[0] = phi[1];
        phi[1] = temp;
        if(temp % 2 == 0){
            sum += temp;
        }
    }while(temp < MAX_NUM);
    printf("Sum of even fibonacci numbers (less than four million): %d\n", sum);
}