#include<stdio.h>
void sort(char array[],int);
int main(){
    int i,j,k;
    char array[7];
    printf("Enter the elements of array: ");
    for(i=0;i<7;i++){
        scanf("%c",&array[i]);
    }
    sort(array,7);
}
void sort(char b[],int n){
    char temp;
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(b[j]<b[j+1]){
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
            printf("\n");        
            for(k=0;k<n;k++){
            printf("%c\t",b[k]);
            }
        }
        printf("\n");
    }
}