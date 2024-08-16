#include<stdio.h>
#include<string.h>
void main(){
    char*str;
    printf("Enter a string: ");
    gets(str);
    int count=0;
    while(str[count]!='\0')
    count++;
    printf("The length of the string is:%d",count);
}