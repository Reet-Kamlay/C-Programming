#include<stdio.h>
#define max(n,m){ if(n>m) \
printf("The max of two numbers is :%d\n",n);\
else \
printf("The max of two numbers is:%d\n",m);}
int main(){
    int a,b;
    printf("Enter two numbers: ");
    scanf("%d %d",&a,&b);
    max(a,b);
    return 0;
}
