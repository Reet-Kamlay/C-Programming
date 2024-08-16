#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct list{
    char name[20];
    int grade;
    struct list*nextnode;
    struct list*prevnode;
};
struct list*current;
struct list*first,*last;
void read(struct list*);
void display1();
void display2();
int count=0;
void main(){
    first=(struct list*)malloc(sizeof(struct list));
    if(first==NULL){
        printf("out of memory");
        exit(1);
    }
    first->prevnode=NULL;
    read(first);
    printf("total number listed=%d\n",count);
    display1();
    display2();
}
void read(struct list*newnode){
    while(1){
        printf("Enter name and grade.Enter (end 0) to stop: ");
        scanf("%s %d",&newnode->name,&newnode->grade);
        if(strcmp(newnode->name,"end")==0 && newnode->grade==0){
            newnode->nextnode=NULL;
            break;
            return;
        }
        else{
            count++;
            newnode->nextnode=(struct list*)malloc(sizeof(struct list));
            newnode->nextnode->prevnode=newnode;
            last=newnode;
            read(newnode->nextnode);
        }
        return;
    }
}
void display1(){
    struct list*current;
    current=first;
    printf("The list from beginning is displayed below: ");
    while(current!=NULL){
        printf("%s\t%d\n",current->name,current->grade);
        current=current->nextnode;
    }
    return;
}
void display2(){
    struct list*current;
    current=last;
    printf("The list from beginning is displayed below: ");
    while(current!=NULL){
        printf("%s\t%d\n",current->name,current->grade);
        current=current->prevnode;
    }
    return;
}
