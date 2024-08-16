#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct grade_list{
    char name[30];
    int grades;
    struct grade_list *next;
};
struct grade_list*location1,*location2;
struct grade_list*new_entry;
struct grade_list*first;
struct grade_list*current;
struct grade_list*location;
struct grade_list*search_location(int);
void read();
void insert(char*,int);
void display();
void display2(int);
int count=0,i;
void main(){
    first=NULL;
    read();
    display();
    display2(3);
    printf("Total no of students entered=%d\n",count);
}
void read(){
    char name[30];
    int grades;
    while(1){
        printf("Enter name and grades.to stop enter -ve grade.\n");
        scanf("%s %d",&name,&grades);
        if(grades<0)
        break;
        else
        insert(name,grades);
    }
}
void insert(char*name,int grades){
    new_entry=(struct grade_list*)malloc(sizeof(struct grade_list));
    if(new_entry==(struct grade_list*)NULL){
        printf("Error-out of memory");
        exit(1);
    }
    count++;
    if(first=NULL){
    new_entry->next=NULL;
    first=new_entry;
    }
    else
    if(grades>first->grades){
        new_entry->next=first;
        first=new_entry;
    }
    else{
        location=search_location(grades);
        new_entry->next=location->next;
        location->next=new_entry;}
    strcpy(new_entry->name,name);
    new_entry->grades=grades;
    return;
}
struct grade_list*search_location(int grades){
    location1=first;
    location2=first->next;
    if(location2==NULL)
    return location1;
    while(1){
        if(grades>location2->grades)
        break;
        else
        if(location2->next==NULL){
            location1=location2;
            break;
        }
        else{
            location1=location2;
            location2=location1->next;
        }
    }
    return location1;
}
void display(){
    printf("Grade list in order of merit is displayed below.\n");
    printf("Name\tGrades\n");
    current=first;
    while(current!=NULL){
        printf("%s",current->name);
        printf("\t%d\n",current->grades);
        current=current->next;
    }
}
void display2(int n){
    current=first;
    printf("\nThe final %d in merit list are displayed below:\n");
    for(i=0;i<n;i++){
        printf("%s",current->name);
        printf("\t%d\n",current->grades);
        current=current->next;
    }
}