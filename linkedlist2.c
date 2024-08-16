#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct list{
    char name[50];
    int grade;
    struct list*nextnode;
};
struct list*current;
struct list*first;
void read(struct list*);
void locate();
void display();
int count=0;
char*str;
void main(){
    first=(struct list*)malloc(sizeof(struct list));
    if(first==NULL){
        printf("Out of memory");
        exit(1);
    }
    read(first);
    printf("Count=%d\n",count);
    locate();
    display();
}
void read(struct list*newnode){
    while(1){
        printf("Enter name and grade(Enter end 0 to stop):");
        scanf("%s %d",&newnode->name,&newnode->grade);
        if(strcmp(newnode->name,"end")==0 && newnode->grade==0){
            break;
        }
        else{
            count++;
            newnode->nextnode=(struct list*)malloc(sizeof(struct list));
            read(newnode->nextnode);
            return;
        }
    }
}
void display(){
    struct list*current;
    current=first;
    printf("Total list is displayed below:\n");
    while(current!=NULL){
        printf("%s\t%d\n",current->name,current->grade);
        current=current->nextnode;
        return;
    }
}
void locate(){
    char str[50];
    struct list*current;
    current=first;
    printf("Enter the name to know its location\n");
    printf("Otherwise enter no\n");
    scanf("%s",&str);
    if(strcmp(str,"no")==0){
        return;
    }
    else{
        current=first;
        while(current!=NULL){
            if(strcmp(current->name,str)==0){
                printf("%s %d\n",current->name,current->grade);
                break;
                return;
            }
            else{
                current=current->nextnode;
            }
        }
    }
}