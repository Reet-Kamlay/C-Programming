#include<stdio.h>
#define f(x,y) (x)>(y)?(x):(y)
int main(){
    int a,b,c,d;
    printf("Enter four numbers: ");
    scanf("%d %d %d %d",&a,&b,&c,&d);
    printf("The greatest of first two numbers is:%d\n",f(a,b));
    printf("The greatest of all four numbers is:%d",f(f(a,b),f(c,d)));
    return 0;
}