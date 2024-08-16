#include<stdio.h>
int main(){
    int n,i,j,a;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    a=1;
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=i;j=j+1){
            printf("%d",a);
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}