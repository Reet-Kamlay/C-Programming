#include<stdio.h>
#define max(m,n) (m>n?m:n)
int main(){
    int a,b;
    float x,y;
    printf("Enter two integer numbers: ");
    scanf("%d %d",&a,&b);
    printf("Enter two float numbers: ");
    scanf("%f %f",&x,&y);
    printf("The maximum of two integer numbers is:%d\n",max(a,b));
    printf("The maximum of two float numbers is:%f\n",max(x,y));
}