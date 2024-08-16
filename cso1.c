#include<stdio.h>
int main(){
    int x,y,z,a,b,c,max1,max2,max3,max4,max5;
    printf("Enter the six numbers:");
    scanf("%d %d %d %d %d %d",&x,&y,&z,&a,&b,&c);
    max1=x>y?x:y;
    printf("The max of the first two numbers is:%d\n",max1);
    max2=(x>y?x:y)>z?(x>y?x:y):z;
    printf("The max of the first two numbers is:%d\n",max2);
    max3=a>b?a:b;
    printf("The max of the second half of the two numbers is:%d\n",max3);
    max4=(a>b?a:b)>c?(a>b?a:b):c;
    printf("The max of the second half of the numbers is%d\n:",max4);
    max5=max4>max2?max4:max2;
    printf("The max of all the six numbers is:%d\n",max5);
}