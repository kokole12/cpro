#include <stdio.h>
#include <stdlib.h>

struct Node 
{
    int data;
    struct Node * next;
} typedef Node;

struct Node* head;

void insert(int val, int n)
{
    Node* temp = malloc(sizeof(struct Node));
    temp -> data = val;
    temp -> next = NULL;
    
    if (n == 1)
    {
        temp -> next = head;
        head = temp;
        return;
    }

    Node* temp2 = head;
    for (int i = 0; i < n-2; i++)
    {
        temp2 = temp2 -> next;
    }
    temp -> next = temp2 -> next;
    temp2 -> next = temp;

}

void print()
{
    struct Node* temp = head;
    while (temp != NULL)
    {
        printf("%d", temp ->data);
        temp = temp -> next;
    }
    printf("\n");

}


int main(void)
{
    head = NULL;
    insert(2, 1);
    insert(3, 2);
    insert(4, 1);
    insert(5,2);
    print();
}
