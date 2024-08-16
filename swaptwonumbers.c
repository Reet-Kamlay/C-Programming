#include<stdio.h>
int main(){
int a,b;
printf("Enter the value of a: ");
scanf("%d",&a);
printf("Enter the value of b: ");
scanf("%d",&b);
int temp;
temp=a;
a=b;
b=temp;
printf("The value of a is:%d\n",a);
printf("the value of b is:%d",b);
return 0;
}