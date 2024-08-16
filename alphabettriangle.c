#include<stdio.h>
int main(){
    int ch,i,j,n;
    printf("Enter a value for n: ");
    scanf("%d",&n);
    for(i=1;i<=n;i=i+1){
        ch='A';
        for(j=1;j<=i;j=j+1){
            printf("%c",ch);
            ch=ch+1;
        }
        printf("\n");
    }
    

    return 0;
}