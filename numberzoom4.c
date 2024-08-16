#include<stdio.h>
int main(){
    int i,j,k,a,b,min,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    min=0;
    for(i=1;i<=2*n-1;i++){
        for(j=1;j<=2*n-1;j++){
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
}