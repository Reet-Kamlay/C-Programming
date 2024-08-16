#include<stdio.h>
#include<math.h>
int main(){
    int eqn,a,b,c,d,x,A,T,i,r1,r2;
    printf("Enter the value of a,b,c: ");
    scanf("%f %f %f",&a,&b,&c);
    eqn=a*x*x+b*x+c;
    d=b*b-4*a*c;
    i=sqrt(-1);
    A=(-b)/(2*a);
    T=sqrt(d)/(2*a);
    if(a==0 && b==0){
        printf("No solution");
    }
    else if(a==0){
        x=(-c)/b;
        printf("There is only one root.");
        printf("The root of the quadratic equation is %f",x);
    }
    else if(d<0){
        r1=A+T*i;
        r2=A-T*i;
        printf("The value of two imaginary roots of the equation are %f and %f ",r1,r2);
    }
    else if(d==0){
        int r1=r2=(-b)/(2*a);
        printf("The root of the equation is %f ",r1);
    }
    else{
        float r1=A+T;
        float r2=A-T;
        printf("There are two real roots.");
        printf("The roots of the equation are %f and %f.",r1,r2);
    }
    return 0;
}