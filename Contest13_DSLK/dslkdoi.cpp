#include <iostream>
#include <string>

struct node
{
    int data;
    node *next;
    node *prev;
};

node *makenode(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

void themdau(node **head, int x)
{
    node *newnode = makenode(x);
    if (*head == NULL)
    {
        *head = newnode;
    }
    else
    {
        (*head)->prev = newnode;
        newnode->next = *head;
        *head = newnode;
    }
}