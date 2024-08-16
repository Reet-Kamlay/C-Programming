#include<stdio.h>
int main(){
    int n,count=0,i;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    for(i=3;i<=n;i++){
        count=1;
        for(int j=2;j<=(i/2);j++){
            if(i%j==0){
                count=0;
                break;
            }
        }
        if(count!=0){
            printf("%d ",i);
        }
    }
    return 0;
}