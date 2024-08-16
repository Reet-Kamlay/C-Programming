#include<stdio.h>
int main(){
    int m,n,p,product;
    printf("m\t\tn\t\tp\t\tproduct\n");
    for(m=0,n=0,p=2;m<=4,n<=8,p<9;m++,n+=2,p++){
        product=m*n*p;
        printf("%d\t\t%d\t\t%d\t\t%d\n",m,n,p,product);
    }
    return 0;
}