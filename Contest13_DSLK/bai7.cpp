#include <iostream>
#include <string>

using namespace std;

struct node
{
    int data;
    node *next;
    node *prev;
};

node* makenode(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    newnode->prev = NULL;
    return newnode;
}

// void themdau2(node **head, int x){
//     node *newnode = makenode(x);
//     newnode->next = (*head);
//     if (*head != NULL)
//     {
//         (*head)->prev = newnode;
//     }
//     (*head) = newnode;
// }

void themdau(node **head, int x)
{
    node *newnode = makenode(x);
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    newnode->next = *head;
    (*head)->prev = newnode;
    *head = newnode;
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
    node *head;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        themdau(&head, x);
    }
    duyet(head);
}