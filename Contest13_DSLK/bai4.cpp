#include <iostream>
#include <string>

using namespace std;

struct node
{
    int data;
    node *next;
};

node *makenode(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

void push(node **head, int x)
{
    node *newnode = makenode(x);
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    node *temp = *head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = newnode;
}

void pop(node **head)
{
    if (*head == NULL)
    {
        return;
    }
    node *temp = *head;
    *head = (*head)->next;
    delete temp;
}

void front(node *head)
{
    if (head == NULL)
    {
        cout << "EMPTY" << endl;
        return;
    }
    cout << head->data << endl;
}

int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    string t = "";
    while (n--)
    {
        cin >> t;
        if (t == "push")
        {
            int x;
            cin >> x;
            push(&head, x);
        }
        else if (t == "pop")
        {
            pop(&head);
        }
        else if (t == "front")
        {
            front(head);
        }
        t = "";
    }
}