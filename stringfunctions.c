#include<stdio.h>
void main(){
    int ginti=0;
    char ch;
    int a=0,b=0,c=0;
    printf("Enter a sentence: ");
    while(ch=getchar()){
        ginti++;
        if(isalpha(ch))
        ++a;
        if(isdigit(ch))
        b++;
        if(isalnum(ch))
        c++;
        if(ch=='.')
        break;
    }
    printf("Number of letters=%d\n",b);
    printf("Number of digits=%d\n",a);
    printf("Number of digits+letters=%d",c);
}