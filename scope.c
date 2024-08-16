#include<stdio.h>
#define length 40
#define breadth 20
int main(){
    printf("Defined length:%d and defined breadth:%d\n",length,breadth);
    #undef length
    #undef breadth
    #define length 50
    #define breadth 30
    printf("Defined new length:%d and defined new breadth:%d\n",length,breadth);
    return 0;
}