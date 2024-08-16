#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    long unsigned seed;
    seed=time(NULL);
    srand(seed);
    printf("Seed=",seed);
    printf("The random numbers are as below: \n");
    for(int n=1;n<=7;n++){
        printf("%d\t",rand());
    }
    return 0;
}