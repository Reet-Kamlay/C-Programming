#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    long unsigned seed;
    seed=time(NULL);
    srand(seed);
    printf("The random numbers are given below: \n");
    for(int i=1;i<7;i++){
        printf("%d\t",rand());
    }
    return 0;
}