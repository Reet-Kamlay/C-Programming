#include<stdio.h>
int main(){
    char name[100][30];
    int donation[100],total=0,i=0,count=0;
    while(1){
        printf("Enter name and donation: ");
        scanf("%s %d",name[i],donation[i]);
        total+=donation[i];
        if(donation[i]==0){
            break;
        }
        else{
            i++;
            count++;
        }
        continue;
    }
    printf("Toatl no of donors=%d\n",count);
    printf("Total collection=%d\n",total);
}