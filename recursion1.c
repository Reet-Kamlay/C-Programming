#include<stdio.h>
void rec(int n)
{
    if(n==13)
        {return;}
    rec(n-1);
    printf("%d",n);
}
int main()
{
    rec(10);
    return;
}