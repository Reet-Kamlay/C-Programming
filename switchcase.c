#include<stdio.h>
int main(){
    int M=4000,L=12000,A=20000,E=10000;
    char city;
    printf("If you want to travel to Mumbai enter M\n"
    "If you want to travel to London enter L\n"
    "If you want to travel to New York enter A\n"
    "If you want to travel to Moscow enter E\n");
    printf("Enter the city you want to travel to: ");
    scanf("%c",&city);
    switch(city){
        case 'M':
        printf("The fare to travel to Mumbai is:%d",M);
        break;
        case 'L':
        printf("The fare to travel to London is:%d",L);
        break;
        case 'A':
        printf("The fare to travel to Australia is:%d",A);
        break;
        case 'E':
        printf("The fare to travel to England is:%d",E);
        break;
        default:
        printf("The place you entered is not on our list.");
        break;

    }
return 0;
}