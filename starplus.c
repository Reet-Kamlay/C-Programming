#include<stdio.h>
int main(){
    int i,j,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=n;j=j+1){
            if(i==3||j==3){
                printf("*");
            }
            else{
                printf(" ");
            }
        }
        printf("\n");
    }
    return 0;
}   777