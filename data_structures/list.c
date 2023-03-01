#include <stdio.h>
#include <stdlib.h>

struct Node{
    int data;
    struct Node * next;
} typedef Node;


Node * insert(Node * head, int x)
{
    Node* temp = malloc(sizeof(struct Node));
    temp -> data = x;
    temp -> next = head;
    head = temp;
    return head;
}

void print(Node * head){

    while (head != NULL)
    {
        printf("%d", head -> data);
        head = head -> next;
    }
    printf("\n");    
}

int main(void)
{
Node * head = NULL;
    int x, i, n;
    printf("Enter the value: ");
    scanf("%d", &x);
    for (i = 0; i< x; i++)
    {
        scanf("%d", &n);
        head = insert(head, n);
         print(head);
    }

    return  0;

}
