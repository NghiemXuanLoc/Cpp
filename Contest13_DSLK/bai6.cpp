#include <iostream>
#include <string>
#include <map>

using namespace std;

struct node
{
    string data;
    node *next;
};

node *makenode(string t)
{
    node *newnode = new node;
    newnode->data = t;
    newnode->next = NULL;
    return newnode;
}

void themcuoi(node **head, string t)
{
    node *newnode = makenode(t);
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

void duyet(node *head, map<string, int> mp)
{
    while (head != NULL)
    {
        string t = head->data;
        if (mp[t] != 0)
        {
        cout << head->data << " " << mp[t] << endl;
        mp[t] = 0;
        }
        head = head->next;
    }
}

int main()
{
    string t;
    node *head = NULL;
    map<string, int> mp;
    while (cin >> t)
    {
        mp[t]++;
        themcuoi(&head, t);
    }
    duyet(head, mp);
}