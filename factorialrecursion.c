#include<stdio.h>
int factorial(int n){
    if(n==1){
        return 1;
    }
    else{
        return n*factorial(n-1);
    }
}
int main(){
    int x;
    printf("Enter the number to get its factorial: ");
    scanf("%d",&x);
    int fac=factorial(x);
    printf("The factorial of the number %d is:%d",x,fac);
}