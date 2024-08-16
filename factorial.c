#include<stdio.h>
int main(){
    int fac=1,n,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>0;i=i-1){
        fac=fac*i;
    }
    printf("The factorial of a number is: %d",fac);
    return 0;
}