#include<stdio.h>
#define length 60
int main(){
    int area;
    #undef length
    #ifndef length
    #define length 20
    #endif;
    area=length*length;
    printf("Area:%d",area);
    return 0;
}