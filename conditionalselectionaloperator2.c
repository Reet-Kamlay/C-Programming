#include<stdio.h>
int main(){
    int x,y,z,a,b,c,max1,max2,max3,max4,max5;
    printf("Enter the value of six numbers: ");
    scanf("%d %d %d %d %d %d",&x,&y,&z,&a,&b,&c);
    max1=x>y?x:y;
    printf("The maximum of first two numbers:%d\n",max1);
    max2=(x>y?x:y)>z?(x>y?x:y):z;
    printf("The maximum of three numbers is:%d\n",max2);
    max3=a>b?a:b;
    printf("The maximum from fourth and fifth number is:%d\n",max3);
    max4=(a>b?a:b)>c?(a>b?a:b):c;
    printf("The maximum of second three numbers is:%d\n",max4);
    max5=max2>max4?max2:max4;
    printf("The maximum of all six numbers is:%d\n",max5);
    return 0;
}