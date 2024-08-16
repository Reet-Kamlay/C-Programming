#include<stdio.h>
int main(){
    int a,b;
    a=5;
    int* x=&a;
    printf("%p\n",&a);
    printf("%p\n",x);
    printf("%p\n",&x);
    printf("%d\n",*x);
    return 0;
}