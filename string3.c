#include<stdio.h>
void main(){
    char ch;
    int count=0;
    printf("Enter some sentence: ");
    while((ch=getchar())!='.'){
        if(isdigit(ch)){
            count++;
        }
    }
    printf("count=%d",count);
    printf("Enter a sentence: ");
    while(ch=getchar()){
        if((isupper(ch)))
        printf("%c",(tolower(ch)));
        else
        printf("%c",ch);
    }
}