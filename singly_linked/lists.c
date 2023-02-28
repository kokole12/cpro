#include <stdio.h>
#include <stdlib.h>

struct Node
{
    int data;
    struct Node* next;
} typedef Node;

struct Node * head;

void insert(int x)
{
    struct Node* temp = malloc(sizeof(struct Node));

    temp -> data = x;
    temp -> next = head;
    head = temp; 
  

}

void print(Node* head)
{
    struct Node * temp = head;
    while(temp != NULL)
    {
        printf("%d", temp -> data);
        temp = temp->next;
    }
    printf("\n");
}
int main(void)
{
    int i, n, x;
    head = NULL;
    printf("enter total: ");
    scanf("%d", &n);
    for (i = 0; i<n; i++)
    {
          scanf("%d", &x);
          insert(x);
          print(head);
    }
    return 0;
}

