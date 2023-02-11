#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

struct node
{
    int heso, somu;
    node *next;
};

node *makenode(int hs, int sm)
{
    node *newnode = new node;
    newnode->heso = hs;
    newnode->somu = sm;
    newnode->next = NULL;
    return newnode;
}

void themcuoi(node **head, int hs, int sm)
{
    node *newnode = makenode(hs, sm);
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

void update(node **head, int hs, int sm)
{
    node *x = *head;
    while (x != NULL)
    {
        if (x->somu == sm)
        {
            x->heso += hs;
            return;
        }
        x = x->next;
    }
    themcuoi(head, hs, sm);
}

void sort(node **head)
{
    for (node *i = *head; i != NULL; i = i->next)
    {
        node *max = i;
        for (node *j = i->next; j != NULL; j = j->next)
        {
            if (j->somu > max->somu)
            {
                max = j;
            }
        }
        swap(i->heso, max->heso);
        swap(i->somu, max->somu);
    }
}

void duyet(node *head)
{
    while (head != NULL)
    {
        cout << head->heso << "x^" << head->somu;
        head = head->next;
        if (head != NULL)
        {
            cout << " + ";
        }
    }
}

int main()
{
    node *head;
    string s;
    while (cin >> s)
    {
        if (s != "+")
        {
            int hs = 0, sm = 0, i = 0;
            while (s[i] != 'x')
            {
                hs = hs * 10 + (s[i] - '0');
                i++;
            }
            i += 2;
            while (i < s.size())
            {
                sm = sm * 10 + (s[i] - '0');
                i++;
            }
            update(&head, hs, sm);
        }
    }
    sort(&head);
    duyet(head);
}