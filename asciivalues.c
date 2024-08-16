#include<stdio.h>
int main(){
    int i;
    char ch;
    i=65;
    ch='A';
    while (ch==i)
    {
        printf("The Ascii values of %c is : %d",ch,i);
        printf("\n");
        i=i+1;
        ch=ch+1;    
        
    }
    
    
    return 0;
}