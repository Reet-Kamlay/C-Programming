#include<stdio.h>
void partition(int array[],int start,int end);
void mergesort(int array[],int start,int mid,int end);
int main(){
    int size;
    int array[20];
    printf("The value of the size: ");
    scanf("%d",&size);
    int i;
    printf("Enter the elements of the array: ");
    for(i=0;i<size;i++){
        scanf("%d",&array[i]);
    }
    partition(array,0,size-1);
    printf("The elements of the array: ");
    for(i=0;i<size;i++){
        printf("%d",array[i]);
    }
}
void partition(int arr[],int start,int end){
    int mid;
    if(start<end){
        mid=(start+end)/2;
        partition(arr,start,mid);
        partition(arr,mid+1,end);
        mergesort(arr,start,mid,end);
    }
}
void mergesort(int arr[],int start,int mid,int end){
    int l,i,j,m,temp[20];
    l=start;
    i=start;
    m=mid+1;
    while((l<=mid)&&(m<=end)){
        if(arr[l]<=arr[m]){
            temp[i]=arr[l];
            l++;
        }
        else{
            temp[i]=arr[m];
            m++;
        }
        i++;
    }
    if(l>mid){
        for(j=m;j<=end;j++){
            temp[i]=arr[j];
            i++;
        }
    }
    else{
        for(j=l;j<=mid;j++){
            temp[i]=arr[j];
            i++;
        }
    }
    for(j=start;j<=end;j++){
        arr[j]=temp[j];
    }
}