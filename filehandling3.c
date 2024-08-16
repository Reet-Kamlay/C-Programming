#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE*fptr;
    char str1[]="Try to learn C.";
    char str2[]="It will benefit you in your career.";
    fptr=fopen("file1","w");
    if(fptr=NULL){
        printf("Out of memory.");
        exit(1);
    }
    else
    fprintf(stdout,"File is open.Enter a sentence.\n");
    fputs(str1,fptr);
    fclose(fptr);
    fptr=fopen("file1","r");
    printf("%s\n",fgets(str1,30,fptr));
    fclose(fptr);
}