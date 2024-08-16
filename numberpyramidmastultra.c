#include<stdio.h>
int main(){
    int i,j,nsp,nst,n,k;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    nst=n;
    nsp=0;
    for(i=1;i<=n;i=i+1){
        int a=1;
        for(j=1;j<=nst;j=j+1){
            printf("%d",a);
            a=a+1;
        }
        for(k=1;k<=nsp;k=k+1){
            printf(" ");
        }
        for(j=1;j<=nst;j=j+1){
            printf("%d",a);
            a=a+1;
        }
        nsp+=2;
        nst--;
        printf("\n");
    }
    return 0;
}