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

void themdau(node **head, int x)
{
    node *newnode = makenode(x);
    newnode->next = *head;
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

void sort1(node **head)
{
    for (node *i = *head; i != NULL; i = i->next)
    {
        node *min = i;
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (j->data < min->data)
            {
                min = j;
            }
        }
        int temp = i->data;
        i->data = min->data;
        min->data = temp;
    }
}

void sort2(node **head)
{
    for (node *i = *head; i != NULL; i = i->next)
    {
        node *max = i;
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (j->data > max->data)
            {
                max = j;
            }
        }
        int temp = i->data;
        i->data = max->data;
        max->data = temp;
    }
}

int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        int x;
        cin >> x;
        themdau(&head, x);
    }
    sort1(&head);
    duyet(head);
    cout << endl;
    sort2(&head);
    duyet(head);
}