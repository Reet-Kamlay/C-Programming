#include<stdio.h>
int main(){
    int i=0;
    char kh;
    char Name[6];
    printf("Enter a character: ");
    kh=getchar();
    putchar(kh);
    printf("Enter a name having five characters. ");
    for(i=0;i<6;i++){
        Name[i]=getchar();
    }
    Name[6]='\0';
    printf("You have entered the following name: ");
    puts(Name);
    printf("\n");

    return 0;

}