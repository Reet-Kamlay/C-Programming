#include<stdio.h>
int main(){
    int i=5,m=0,n=0;
    printf("i\t\tm\t\tn\n");
    do{
        m=i*i;
        n=i*i*i;
        printf("%d\t\t%d\t\t%d\n",i,m,n);
        i--;
    }
    while(i<=2);
    return 0;
}