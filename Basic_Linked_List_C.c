#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node* next;
};

void printlist(struct node* n) {
    while(n!= NULL){
        printf("Data of the node is : %d \n",n->data);
        n=n->next;
    }
}
void main() {
    
    struct node* head = (struct node*) malloc(sizeof(struct node));
    struct node* second = (struct node*) malloc(sizeof(struct node));
    struct node* third = (struct node*) malloc(sizeof(struct node));
    
    head -> data = 76;
    head -> next = second;
    
    second -> data = 99;
    second -> next = third;
    
    third -> data = 45;
    third -> next = NULL;
    
    printlist(head);
}
