#include<stdio.h>
int main(){
    
    int i,j,n=500,c=0,s,t;
    for(i=1;i<=n;i++)
    {
        s=i;
        t=i;
        while(t!=0)
        {
            j= t%10;
            c= c+ (j*j*j);
            t= t/10;
        }
        if(c==s)
        {
            printf("%d is ", s);
        }
    continue;
    }

    return 0;
}