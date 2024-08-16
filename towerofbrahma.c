#include<stdio.h>
int shift(int n,char src,char dest,char temp){
    if(n>0){
        shift(n-1,src,temp,dest);
        printf("Shifted %d from %c to %c\n",n,src,dest);
        shift(n-1,temp,dest,src);
    }
}
int main(){
    int n;
    printf("Enter the no of disks: ");
    scanf("%d",&n);
    printf("You have entered the no of disks:%d\n",n);
    shift(n,'s','d','t');
}