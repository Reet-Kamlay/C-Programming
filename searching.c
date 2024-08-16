#include<stdio.h>
int main(){
    int i,key;
    int array[5]={1,2,3,4,5};
    int size=sizeof(array)/sizeof(int);
    printf("Enter the value to be searched for: ");
    scanf("%d",&key);
    for(i=0;i<size;i++){
        if(array[i]==key){
            printf("The value you entered is in the array with array[%d]=%d",i,array[i]);
            goto End;
        }
    }
    printf("The number is not in the array.");
    End:
    return 0;
}