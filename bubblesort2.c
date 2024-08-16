#include<stdio.h>
void sort(char array[],int);
int main(){
    int n,i,j;
    printf("Enter the size of the array: ");
    scanf("%d",&n);
    char arr[n];
    for(i=0;i<n;i++){
        scanf("%c",&arr[i]);
    }
    sort(arr,n);
}
void sort(char b[],int n){
    int i,j,k;
    char temp;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(b[j]<b[j+1]){
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
            for(k=0;k<n;k++){
                printf("%c",b[k]);
            }
        }
    }
}