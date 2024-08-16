#include<stdio.h>
int main(){
    int i,j,a,b,n,min;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    min=0;
    for(i=1;i<=2*n-1;i=i+1){
        for(j=1;j<=2*n-1;j=j+1){
            a=i;
            if(i>n){
                a=2*n-i;
            }
            b=j;
            if(b>n){
                b=2*n-j;
            }
            if(a<b){
                min=a;
            }
            else{
                min=b;
            }
            printf("%d",n+1-min);
        }
        printf("\n");
    }
    return 0;
}