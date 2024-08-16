#include<stdio.h>
void swap(int* x,int* y){
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int main(){
    int a,b;
    a=5;
    b=6;
    swap(&a,&b);
    printf("The value of a:%d\n",a);
    printf("The value of b:%d",b);

    return 0;
}