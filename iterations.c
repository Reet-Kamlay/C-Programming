#include<stdio.h>
int main(){
    int k=1,square,cube,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    while(k<=n){
        square=k*k;
        cube=k*k*k;
        printf("The square of the number is:%d\n",square);
        printf("The cube of the number is:%d\n",cube);
        k++;
    }
    
    return 0;
}
