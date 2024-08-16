#include<stdio.h>
void main(){
    char ch;
    int count=0;
    printf("Enter the sentance: ");
    while((ch=getchar())!='.')
    {if(isdigit(ch))
        count++;
    }
    printf("Count=%d",count);
    printf("Enter the sentence: ")
    while(ch=getchar()){
        if(isupper(ch))
        printf("%c",(tolower(ch)));
        else
        printf("%c",ch);
    }
}