#include<stdio.h>
#define area(x) x*x
#define costpaint(x,y,z) y*z+area(x)
int main(){
    int a,b,c;
    printf("Enter three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    area(a);
    costpaint(a,b,c);
    printf("The area is:%d\n",area(a));
    printf("The costpaint is:%d",costpaint(a,b,c));
    return 0;
}