#include <iostream>
#include <string>

using namespace std;

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

void themcuoi(node **head, int x)
{
    node *temp = *head;
    node *newnode = makenode(x);
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void update(node **head, int x)
{
    node *temp = *head;
    while (temp != NULL)
    {
        if (temp->data == x)
        {
            return;
        }
        temp = temp->next;
    }
    themcuoi(head, x);
}

void duyet(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

int main()
{
    int n;
    cin >> n;
    node *head = NULL;
    while (n--)
    {
        int x;
        cin >> x;
        update(&head, x);
    }
    duyet(head);
}