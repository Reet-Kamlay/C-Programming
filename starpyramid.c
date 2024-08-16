#include<stdio.h>
int main(){
    int i,j,n,a;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=i+n;j=j+1){
            a=a+1;
            if(i+j>=n+2){
                printf("*");
            }
            else{
                printf(" ");    
            }
        }
        printf("\n");
    }
    return 0;
}