#include<stdio.h>
int main()
{
    for(int u=1;u<=5;u++)
    {
        for(int m=5;m>=u;m--)
        {
            printf(" ");
        }
        for(int n=1;n<=u;n++)
        {
            printf("* ");
        }
        printf("\n");
    }
}