#include<stdio.h>
#define pi 3.141592653
int main(){
    int r=10;
    double a,b;
    a=pi*r*r;
    printf("The area of the circle with pi value 3.141592653 is %f",a);
    #undef pi
    #define pi 3.141
    b=pi*r*r;
    printf("The are of the circle with pi value 3.141 is %f",b);
    return 0;
}
