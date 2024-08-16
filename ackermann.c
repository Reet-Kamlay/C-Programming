#include<stdio.h>
int a(int m,int n){
    if(m==0){
        return n+1; 
    }
    else if(n==0){
        return a(m-1,1);
    }
    else{
        return a(m-1,a(m,n-1));
    }
}
int main(){
    int x,y;
    printf("Enter the value of x and y: ");
    scanf("%d %d",&x,&y);
    int result=a(x,y);
    printf("The value of the function you entered a(%d,%d) is:%d",x,y,result);
}