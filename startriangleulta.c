#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>0;i=i-1){
        for(j=1;j<=i;j=j+1){
            printf("*");
        }
        printf("\n");
    }
    return 0;
}