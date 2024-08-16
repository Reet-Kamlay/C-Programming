#include<stdio.h>
#define f(x,y) (x)>(y)?(x):(y)
int main(){
    int a,b,c,d,e,g;
    printf("Enter six numbers: ");
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&g);
    printf("The greatest of all six numbers:%d",f(f(f(a,b),f(c,d)),f(f(c,d),f(e,g))));
    return 0;
}