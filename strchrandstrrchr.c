#include<stdio.h>
#include<string.h>
void main(){
    char name[]="Faridabad";
    char* ptr;
    ptr=strchr(name,'d');
    printf("The first occurance of the d in the string name is: ");
    printf("%d\n",(ptr-name));
    ptr=strrchr(name,'d');
    printf("The last occurance of the d in the string name is: ");
    printf("%d\n",(ptr-name));
}