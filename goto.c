#include<stdio.h>
int main(){
    int A,B;
    printf("Enter two numbers: ");
    scanf("%d %d",&A,&B);
    Bell:
    if(A<B){
        A++;
    }
    else{
        B++;
        }
    if(!(B%A) || !(A%B)){
        printf("After program execution A=%d and B=%d\n",A,B);
    }
    else{
        goto Bell;
    }
    return 0;
}