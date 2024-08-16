#include<stdio.h>
int main(){
    int x,y,z,min,max1,max2;
    printf("Enter the value of x: ");
    scanf("%d",&x);
    printf("Enter the value of y: ");
    scanf("%d",&y);
    printf("Enter the value of z: ");
    scanf("%d",&z);
    min=x<y?x:y;
    printf("The minimum of two numbers is:%d\n",min);
    max1=x>y?x:y;
    printf("The maximum of two numbers is:%d\n",max1);
    max2=(x>y?x:y)>z?(x>y?x:y):z;
    printf("The maximum of three numbers is:%d\n",max2);
    return 0;
}