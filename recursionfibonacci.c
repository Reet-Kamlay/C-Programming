#include<stdio.h>
int fibonacci(int n){
    if(n==0 || n<2)
    return n;
    else
    return fibonacci(n-1)+fibonacci(n-2);
}
int main(){
    int i;
    for(i=0;i<=10;i++){
        printf("%d",fibonacci(i));
    }
    printf("\n");
}