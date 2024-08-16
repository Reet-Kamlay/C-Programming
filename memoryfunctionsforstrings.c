#include<stdio.h>
#include<stdlib.h>
void main(){
    char ch1[]="80";
    char ch2[]="3.14159";
    char ch3[]="Delhi16";
    char ch4[]="16Delhi";
    char ch5[]="546326759Puri";
    printf("The first operation is:%d\n",atoi(ch1)*2);
    printf("The second operation is:%f\n",atof(ch2)*2);
    printf("The third operation is:%d\n",atoi(ch3));
    printf("The fourth operation is:%d\n",atoi(ch4)/4);
    printf("The fifth peration is %d\n",atol(ch5));
}