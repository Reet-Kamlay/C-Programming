#include<stdio.h>
int greet(){
    int n=10;
    return n;
}
int main(){
    greet();
    greet();
    int reet=greet();
    printf("The value of greet is%d",reet);
    return 0;
}