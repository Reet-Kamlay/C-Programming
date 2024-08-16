#include<stdio.h>
int main(){
    int x=0,i=0;
    long int factorial=1;
    while(1){
        i++;
        factorial*=i;
        if(factorial>1000)
        break;
        printf("i=%d\tFactorial=%d\n",i,factorial);
    }
    return 0;
}
