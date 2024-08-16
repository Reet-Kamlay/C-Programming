#include<stdio.h>
int main(){
    int n,i,j,a;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    a=0;
    for(i=1;i<=n;i=i+1){
        for(j=1;j<=i;j=j+1){
            if(a%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
            a=a+1;
        }
        printf("\n");
    }
    return 0;
}