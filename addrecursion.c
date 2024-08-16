#include<stdio.h>
int power(int x,int n){
    if(n==0){
        return 1;
    }
    else{
        return x*power(x,n-1);
    }
}
int main(){
    int a,b;
    printf("Enter the number and power: ");
    scanf("%d %d",&a,&b);
    int pow=power(a,b);
    printf("The answer is:%d",pow);
}