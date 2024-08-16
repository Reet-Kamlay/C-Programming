#include<stdio.h>
#include<math.h>
int main()
{
    float a,b,c=1,d;
    printf("Enter a 2 numbers:-");
    scanf("%f %f",&a,&b);
    d=pow(a,b);
    printf("%f \n",d);

    for(float i=1;i<=b;i++)
    {
        c*=a;
    }
    printf("%f",c);
}