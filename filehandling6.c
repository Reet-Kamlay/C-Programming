#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE*fptr;
    int i,j,k[6];
    fptr=fopen("file1","w");
    if(fptr==NULL){
        printf("File cannot be created.");
        exit(1);
    }
    else
    printf("File is open.Enter data:\n");
    for(i=0;i<6;i++)
    putw(k[i]=5*i,fptr);
    fclose(fptr);
    fptr=fopen("file1","r");
    printf("The elements of the array k are as below.\n");
    for(j=0;j<6;j++)
    printf("%d\t",getw(fptr));
    printf("\n");
    fclose(fptr);
}