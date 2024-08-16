#include<stdio.h>
#include<string.h>
int main()
{
    char str[1000];
    printf("Enter a string:-");
    gets(str);
    printf("\n Before reversing the string:- %s \n",str);
    int temp,n;
    n=strlen(str);
    for(int i=0;i<n/2;i++)
    {
        temp=str[i];
        str[i]=str[n-i-1];
        str[n-i-1]=temp;
    }
    printf("\n After reversing the string:- %s \n",str);
}