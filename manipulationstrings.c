#include<stdio.h>
#include<string.h>
void main(){
    char s1[]="ABCDE";
    char s2[]="A";
    char s3[]="z";
    char s4[]="John";
    char s5[30];
    char s6[]="Good Morning!";
    printf("The Length of s1:%d\n",strlen(s1));
    printf("The length of s2:%d\n",strlen(s2));
    printf("Comparison of s2 and s3:%d\n",strcmp(s2,s3));
    printf("Comparison of s3 and s2:%d\n",strcmp(s3,s2));
    printf("Comparison of s3 with z:%d\n",strcmp(s3,"z"));
    strcat(s4,s6);
    printf("s4:%s\n",s4);
    strcpy(s5,s4);
    printf("s5:%s\n",s5);
}