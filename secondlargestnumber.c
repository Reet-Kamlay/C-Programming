#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of three numbers: ");
    scanf("%d %d %d",&a,&b,&c);
    if(a>b && a>c){
        if(b>c){
            printf("The second largest number is:%d",b);
        }
        else{
            printf("The second largest number is:%d",c);
        }
    }
    if(b>a && b>c){
        if(a>c){
            printf("The second largest number is:%d",a);
        }
        else{
            printf("The second largest number is:%d",c);
        }
    }
    if(c>a && c>b){
        if(a>b){
            printf("The second largest number is:%d",a);
        }
        else{
            printf("The second largest number is:%d",b);
        }
    }
    return 0;
}