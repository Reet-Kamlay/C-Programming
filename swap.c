#include<stdio.h>
int main(){
    int temp,a=5,b=10;
    temp=a;
    a=b;
    b=temp;
    printf("The value of a is:%d\n",a);
    printf("The value of b is:%d",b);
    return 0;
    
}