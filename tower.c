#include<stdio.h>
int shift(int n,char src,char dest,char temp){
    if(n>0){
        shift(n-1,src,temp,dest);
        printf("Shifted %d from %c to %c.\n",n,src,dest);
        shift(n-1,temp,dest,src);
    }
}
int moves(int n){
    if(n==1){
        return 1;
    }
    else{
        return 2*moves(n-1)+1;
        
    }
    
}
int main(){
    int n;
    printf("Enter the number of disks: ");
    scanf("%d",&n);
    printf("You have entered the number of disks:%d\n",n);
    shift(n,'s','d','t');
    int no=moves(n);
    printf("The no of moves is:%d",no);
}