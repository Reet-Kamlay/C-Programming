#include<stdio.h>
int main()
{
    for(int i=1;i<=5;i++)
    {
        for(int k=1;k<=i;k++)
        {
            printf(" ");
        }
        for(int j=i;j<=5;j++)
        {
            if(j%2==0)
            {
                printf("*"," ");
            }
            else
            {
                printf("#"," ");
            }
        }
        printf("\n");
    }
    
    for(int u=1;u<=5;u++)
    {
        for(int m=5;m>=u;m--)
        {
            printf(" ");
        }
        for(int n=1;n<=u;n++)
        {
            if(n%2==0)
            {
                printf("*"," ");
            }
            else
            {
                printf("#"," ");
            }
        }
        printf("\n");
    }
    
}
