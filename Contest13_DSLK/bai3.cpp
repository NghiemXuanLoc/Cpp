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
    newnode->next = *head;
    (*head) = newnode;
}

void pop(node **head)
{
    if (*head == NULL)
    {
        return;
    }
    node *temp = *head;
    *head = temp->next;
    delete temp;
}

void show(node *head)
{
    if (head == NULL)
    {
        cout << "EMPTY" << endl
             << endl;
        return;
    }
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
        
    }
    cout << endl;
}

int main()
{
    int n;
    cin >> n;
    node *head = NULL;
    string t = "";
    while (n--)
    {
        cin >> t;
        if (t == "pop")
        {
            pop(&head);
        }
        if (t == "push")
        {
            int x;
            cin >> x;
            push(&head, x);
        }
        else if (t == "show")
        {
            show(head);
        }

        t = "";
    }
}
