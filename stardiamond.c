#include<stdio.h>
int main(){
    int ml,nst,nsp,j,i,n,k;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    nsp=n/2;
    nst=1;
    ml=n/2+1;
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=nsp;j=j+1){
            printf(" ");
        }
        for(k=1;k<=nst;k=k+1){
            printf("*");
        }
        if(i<ml){
            nsp--;
            nst+=2;
        }
        else{
            nsp++;
            nst-=2;
        }
        printf("\n");
    }
    return 0;
}