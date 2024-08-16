#include<stdio.h>
int main(){
    int n,i,j;
    printf("Enter a number: ");
    scanf("%d",&n);
    for(i=n;i>0;i=i-1){
        for(j=1;j<=i;j=j+1){
            printf("%d",j);
        }
        printf("\n");
    }
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            printf("%d",j);
        }
        printf("\n");
    }
    return 0;
}