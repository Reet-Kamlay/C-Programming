#include<stdio.h>
#include<string.h>
void main(){
    char str[]="New Delhi";
    char* ptr=strstr(str,"Del");
    printf("%d\n",ptr-str);
    printf("It is str[%d]\n",ptr-str);
    printf("The length of str is:%d",strlen(str));
}