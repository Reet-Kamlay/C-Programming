#include<stdio.h>
#include<stdlib.h>
void main(){
    FILE*fptr;
    int i,j,Grad;
    char name[10];
    char*Name[4]={"Ragini","Mahanti","Rupa","Sujata"};
    int grade[4]={71,74,85,86};
    fptr=fopen("Grade","w");
    if(fptr==0){
        printf("Failed to open the file.");
        exit(1);
    }
    else
    printf("File is open for writing.\n");
    for(i=0;i<4;i++)
    fprintf(fptr,"%d\t%s\t%d\n",i,Name[i],grade[i]);
    fclose(fptr);
    fptr=fopen("Grade","r");
    if(fptr==0){
        printf("Failed to open the file.");
        exit(1);
    }
    else
    printf("File is open for reading.\n");
    while(fscanf(fptr,"%d %s %d",&j,&name,&Grad )!=EOF)
    printf("%d\t%s\t%d\n",j+1,name,Grad);
    fclose(fptr);
}