#include <stdio.h>
int main()
{
    char s1[50], s2[50];
    int i=0,flag=0;          
    printf("Enter string s1:\n");     
    gets(s1);
    printf("Enter string s2:\n");     
    gets(s2);           
    while(s1[i] != '\0' || s2[i]!='\0') 
    {
        if(s1[i]!=s2[i]){
            flag=1;
            break;
        }
        i++;
    }
    if(flag==0 && s1[i]=='\0' && s2[i]=='\0') printf("strings are same");
    else printf("strings are not same");
}