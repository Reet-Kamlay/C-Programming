#include<stdio.h>
#include<stdlib.h>
void main(){
    char name[]="sunita";
    float grades=70.5;
    int fee_paid=400;
    int age=22;
    FILE*fptr;
    fptr=fopen("student_rec","w");
    if(fptr==NULL){
        printf("File could not be opened\n");
        exit(1);
    }
    else
    fprintf(stdout,"file is open for writing.\n");
    fprintf(fptr,"%s %f %d %d",name,grades,fee_paid,age);
    fprintf(stdout,"Data entered\n");
    fclose(fptr);
    fptr=fopen("student_rec","r");
    if(fptr==NULL){
        printf("File could not be opened\n");
        exit(1);
    }
    else{
        printf("File is open for reading.\n");
        fprintf(stdout,"Name=%s\nGrades=%.2f\tFee_paid=%d\nAge=%d\n",name,grades,fee_paid,age);
    }
    fclose(fptr);
}