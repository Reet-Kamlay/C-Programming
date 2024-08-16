#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE*fptr;
    char ch;
    fptr=fopen("Myfile","w");
    if(fptr==NULL){
        printf("Out of memory");
        exit(1);
    }
    else{
        printf("File is open.Enter the text:\n");
        while((ch=getchar())!=EOF)
        fputc(ch,fptr);
        fclose(fptr);
    }
    fptr=fopen("Myfile","r");
    if(fptr==NULL){
        printf("Out of memory");
        exit(1);
    }
    else{
        printf("File is open again for reading.\n");
        while((ch=fgetc(fptr))!=EOF)
        printf("%c",ch);
        fclose(fptr);
    }
}