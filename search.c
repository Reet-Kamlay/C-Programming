#include<stdio.h>
int main(){
    int i,search,arr[5],var=0,index;
    for(i=0;i<5;i++){
        printf("Enter the %d element of the array: ",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Enter the value to search it: ");
    scanf("%d",&search);
    for(i=0;i<5;i++){
        if(search==arr[i]){
            var=1;
            index=i;
            break;
        }
    }
    if(var==0){
        printf("The element is not found.");
    }
    else{
        printf("The element is in the index %d",index);
    }
    return 0;
}