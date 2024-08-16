#include<stdio.h>
void sort(int array[],int);
int main(){
    int i,j,k,n;
    printf("Enter the value of n: ");
    scanf("%d",&n);
    int array[n];
    for(i=0;i<n;i++){
        printf("Enter the value of %d element: ",i);
        scanf("%d",&array[i]);
    }
    sort(array,n);

}
void sort(int b[],int n){
    int temp;
    int i,j,k;
    for(i=0;i<n-1;i++){
        for(j=0;j<n-1;j++){
            if(b[j]<b[j+1]){
                temp=b[j+1];
                b[j+1]=b[j];
                b[j]=temp;
            }
        }
        printf("\n");
        for(k=0;k<n;k++){
            printf("%d\t",b[k]);
        }
        printf("\n");
    }
}