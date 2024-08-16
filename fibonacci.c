#include<stdio.h>
int main(){
    int n,sum=1,i;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=0;i<=n;i=i+1){
        sum=sum+1*i;
        printf("%d",sum);
        printf("\n");
    }
    return 0;
}