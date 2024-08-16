#include<stdio.h>
int main(){
    char str[50];
    printf("Enter few words: ");
    gets(str);
    printf("You have entered the following: ");
    puts(str);
    return 0;
}