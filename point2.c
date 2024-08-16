#include<stdio.h>
#include<stdlib.h>
int f1(int x,int y){return x+y;}
int f2(int x,int y){return x*y;}
int f3(int x,int y){return x-y;}
void main(){
    int i=0,a,b;
    int your_choice;
    int (*pf)(int a,int b);
    printf("Enter two integer parameters: ");
    scanf("%d %d",&a,&b);
    loop:
    printf("Enter your choice(from 1,2,3): ");
    scanf("%d",&your_choice);
    switch(your_choice){
    case 1:
        pf=f1;
        printf("f1[%d,%d]=%d",a,b,f1(a,b));
        break;
    case 2:
        pf=f2;
        printf("f2[%d,%d]=%d",a,b,f2(a,b));
        break;
    case 3:
        pf=f3;
        printf("f3[%d,%d]=%d",a,b,f3(a,b));
        break;
    default:
        i++;
        if(i==3){
            printf("Enough no of tries.");
            printf("Try again later.");
            exit(0);
        }
        else
        goto loop;
    }


}