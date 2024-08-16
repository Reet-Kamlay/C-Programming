#include<stdio.h>
int main(){
    int days,months;
    printf("Enter the number of days: ");
    scanf("%d",&days);
    months=days/30;
    days=days%30;
    printf("The number of months is:%d and the number of days is:%d",months,days);
    return 0;
}