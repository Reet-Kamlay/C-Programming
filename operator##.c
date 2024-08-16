#include<stdio.h>
#define Func1(Z) printf("Hello "#Z"How are you?")
#define Concate(a,b) a##b
void main(){
    Func1(Sunita!);
    printf("\n");
    printf("Concatenate 1 and 00 =%d\n",Concate(1,00));
    printf("Conactenate names = %s\n",Concate("Mona","Lisa"));
    printf("%s\n",Concate("Let us learn","only C language"));
}