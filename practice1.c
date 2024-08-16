#include<stdio.h>
int main(){
    int i,j,a,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    a=0;
    for(i=0;i<=n;i++){
        for(j=0;j<=i;j++){
            if(a%2==0){
                printf("0");
            }
            else{
                printf("1");
            }
            a++;
        }
        printf("\n");
    }
    return 0;
}