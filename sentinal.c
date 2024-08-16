#include<stdio.h>
int main(){
    char Name[100][30];
    int Donation[100],Total=0,i=0,count=0;
    while(1){
        printf("Enter next Name and donation\n");
        scanf("%s %d",&Name[i],&Donation[i]);
        Total+=Donation[i];
        if(Donation[i]==0)
        break;
        else{
        count++;
        i++;
        continue;
        }
    }
    printf("Total no of donors=%d\n",count);
    printf("Total collection=%d\n",Total);
    return 0;
}