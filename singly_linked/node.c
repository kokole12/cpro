#include <stdio.h>
#include <stdlib.h>
/* creating the template*/
struct node
{
    int age;
    struct node *next;   
};

int main(void)
{
    /* declare all nodes */
    struct node *nodeA;
    struct node *nodeB;
    struct node *nodeC;
    struct node *head;

    /* allocate memory for the node*/
    nodeA = (struct node *)malloc(sizeof(struct node));
    nodeB = (struct node *)malloc(sizeof(struct node));
    nodeC = (struct node *)malloc(sizeof(struct node));

    /* assign value to the node*/
    nodeA -> age = 87;
    nodeB -> age = 75;
    nodeC -> age = 95;
    /* assigning address values */
    nodeA -> next = nodeB;
    nodeB -> next = nodeC;
    nodeC -> next = NULL;


    /* create a head*/
    head = nodeA;

    /* inserting new node at the begining of the list*/
    struct node *new_node;

    new_node = (struct node *)malloc(sizeof(struct node));

    new_node -> age = 22;
    new_node -> next = head;
    head = new_node;

    

    /* create  a temperal pointer*/
    struct node *temp;
    temp = head;

    /* inserting a new node at the end*/
    struct node *endNode;

    endNode = (struct node *)malloc(sizeof(struct node));
    endNode -> age = 33;
    endNode -> next = NULL;
    temp -> next = endNode;

    /* traversing the linked list and printing each member*/
    while (temp -> next != NULL)
    {
        printf("%d --->\t", temp -> age);
        temp  =  temp -> next;
    }
    printf("%d\n", temp -> age);

    /* inserting a node at a given position*/
    struct node *at_position;
    at_position = (struct node *)malloc(sizeof(struct node));
    at_position -> age = 12;

    int i;
    int position = 3;
    for (i =1; i< position; i++)
    {
        temp = temp -> next;
    }
    at_position -> next = temp -> next;
    nodeC  -> next = at_position;
    temp -> next = at_position;
    while (temp -> next != NULL)
    {
        printf("%d --->\t", temp -> age);
        temp  =  temp -> next;
    }
    printf("%d\n", temp -> age);


    return (0);
    
}
