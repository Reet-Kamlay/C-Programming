#include<stdio.h>
int main(){
    int n;
    int c=0;
    int i;
    int j,s,t;
    n=500;

    for(i=101;i<=n;i=i+1){
        s=i;
        t=i;
        while(s!=0){
        j=s%10;
        c=c+(j*j*j);
        s = s/10;
        }
        if(t==c){
            printf("%d The number is a Armstrong Number", t);
        }
        
    }
return 0;
}