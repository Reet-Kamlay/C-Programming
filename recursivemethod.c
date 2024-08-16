#include<stdio.h>
void search(int[],int,int,int);
int main(){
    int start=0,end=10-1,key,i;
    int array[10];
    printf("Enter the elements of the array: ");
    for(i=0;i<10;i++){
        scanf("%d",&array[i]);
    }
    printf("Enter the value you want to search for: ");
    scanf("%d",&key);
    search(array,0,9,key);
}
void search(int array[10],int start,int end,int key){
    int mid=(start+end)/2;
    if(start==end && array[mid]!=key){
        printf("The key is not in the array");
        goto End;
    }
    else
    if(array[mid]==key){
        printf("The key is in the array");
        goto End;
    }
    else
    if(array[mid]>key){
        end=mid-1;
        search(array,start,end,key);
    }
    else{
        start=end+1;
        search(array,start,end,key);
    }
    End:
    return;
}