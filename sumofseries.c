#include<stdio.h>
int main(){
    int n,i,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1)
    {
        if(i%2==0){
            sum=sum-i;
        }
        else
        {
            sum=sum+i;
        }
    }
    printf("The sum of the series: %d",sum);
    return 0;
}