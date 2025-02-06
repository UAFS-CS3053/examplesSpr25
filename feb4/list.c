#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct node{
    int value;
    struct node *next;
};
typedef struct node Node;

struct node *createNode(int value);
void push(Node **head, int value);
void showList(Node *head);
void freeList(Node *head);

int main(int argc, char *argv[]){
    struct node *head=NULL;
    int value;

    argv++;
    while(*argv!=NULL){
        value=atoi(*argv);
        push(&head,value);
        argv++;
    }
    printf("Node size: %ld\n",sizeof(Node));
    showList(head);
    freeList(head);


    return 0;
}

struct node *createNode(int value){
    struct node *newNode = malloc(sizeof(struct node));
    if(newNode==NULL){
        printf("Memory Allocation Error\n");
        exit(1);
    }
    newNode->value=value;
    newNode->next=NULL;
    return newNode;
}

void push(Node **head, int value){
    Node *newNode = createNode(value);
    if(*head!=NULL){
        newNode->next=*head;
    }
    *head=newNode;
}

void showList(Node *head){
    while(head!=NULL){
        printf("Node Address: %p\n",head);
        printf("Value: %d\n",head->value);
        printf("Next: %p\n",head->next);
        head=head->next;
    }
}

void freeList(Node *head){
    Node *current;

    while(head!=NULL){
        current=head;
        head=head->next;
        free(current);
    }
}