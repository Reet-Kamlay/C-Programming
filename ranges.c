#include<stdio.h>
#include<stdlib.h>
#include<time.h>
int main(){
    int m,n,high=6,low=1;
    long unsigned seed;
    long randomnumber;
    seed=time(NULL);
    srand(seed);
    printf("The random numbers from 1 to 100:\n");
    for(n=0;n<11;n++){
        randomnumber=rand()%100+1;
        printf("%d\t",randomnumber);
    }
    printf("\n");
    printf("Random numbers from 1 to 6:\n");
    for(m=0;m<11;m++){
        randomnumber=rand()%(high-low+1)+low;
        printf("%d\t",randomnumber);
    }
}