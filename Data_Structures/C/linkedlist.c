#include<stdio.h>
#include<stdlib.h>

//Craate a node
struct node
    {
        int value;
        struct node *next;
    };

//Print the linked list value
void printLinkedList(struct node *p) {
    while (p != NULL)
    {
        printf("%d", p->value);
        p = p->next;
    }
    
}

int main(){

    
    //Linked list with three items

    //Initialization of nodes
    struct node *head;
    struct node *one = NULL;
    struct node *two = NULL;
    struct node *three = NULL;

    //Allocate memory
    one = malloc(sizeof(struct node));
    two = malloc(sizeof(struct node));
    three = malloc(sizeof(struct node));

    //Assign data values
    one->value = 1;
    two->value = 2;
    three->value = 3;

    //Connect nodes
    one->next = two;
    two->next = three;
    three->next = NULL;

    //Save the address of the first node in head
    head = one;

    //Printing the node values
    printLinkedList(head);


    return 0;
}