#include<stdio.h>
#include<stdlib.h>
int main(){
    int s,n;
    printf("Enter the value of the seed number: ");
    scanf("%d",&s);
    srand(s);
    for(n=1;n<=6;n++){
        printf("%d\t",rand());
    }
    return 0;
}