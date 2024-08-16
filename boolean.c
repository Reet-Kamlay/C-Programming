#include<stdio.h>
int main(){
    int i=1,j=0,k=0,a,b,c;
    printf("i\t\tj\t\tk\t\ta\t\tb\t\tc\n");
    while(j<4 && i>=1 && k<6){
        a=i*i;
        b=j*j;
        c=k*k;
        printf("%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\n",i,j,k,a,b,c);
        j++;
        i++;
        k++;
    }
    return 0;
}