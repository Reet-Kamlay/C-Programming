#include<stdio.h>
int main(){
    int n,a;
    printf("Enter a number: ");
    scanf("%d",&n);
    printf("The reverse of the number is: ");
    while (n!=0)
    {
        
        a=n%10;
        printf("%d",a);
        n=n/10;
    }
    
    
    
    return 0;
}
