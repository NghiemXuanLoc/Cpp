#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct node
{
    string id, ten;
    float gpa;
    node *next;
};

node *makenode(string i, string t, float g)
{
    node *newnode = new node;
    newnode->id = i;
    newnode->ten = t;
    newnode->gpa = g;
    newnode->next = NULL;
    return newnode;
}

void themcuoi(node **head, string i, string t, float g)
{
    node *newnode = makenode(i, t, g);
    node *temp = *head;
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

// tim gpa cao nhat

float timkiem(node *head)
{
    float max_val = 0;
    for (node *i = head; i != NULL; i = i->next)
    {
        if ((i->gpa) > max_val)
        {
            max_val = i->gpa;
        }
    }
    return max_val;
}

void duyet(node *head, float max1)
{
    while (head != NULL)
    {
        if (head->gpa == max1)
        {
            cout << head->id << " " << head->ten << " " << head->gpa << endl;
            head = head->next;
        }
    }
}

int main()
{
    node *head = NULL;
    int n;
    cin >> n;
    while (n--)
    {
        string id, ten;
        float gpa;
        cin.ignore();
        getline(cin, id);
        getline(cin, ten);
        cin >> gpa;
        themcuoi(&head, id, ten, gpa);
    }
    float x = timkiem(head);
    duyet(head, x);
}