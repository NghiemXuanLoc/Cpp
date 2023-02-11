#include <iostream>
#include <string>
#include <iomanip>

using namespace std;

struct sv
{
    string msv, ten;
    float gpa;

    void nhap()
    {
        getline(cin, msv);
        getline(cin, ten);
        cin >> gpa;
    }
};

struct node
{
    sv data;
    node *next;
};

node *makenode(sv x)
{
    node *newnode = new node;
    x.nhap();
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

int dem(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}
void themdau(node **head, sv x)
{
    node *newnode = makenode(x);
    newnode->next = *head;
    *head = newnode;
}

void themcuoi(node **head, sv x)
{
    node *newnode = makenode(x);
    if (*head == NULL)
    {
        *head = newnode;
        return;
    }
    else
    {
        node *temp = *head;
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

// them vao vi tri thu k trong dslk

void chengiua(node **head, sv x, int k)
{
    int n = dem(*head);
    if (k < 1 || k > n + 1)
    {
        return;
    }
    if (k == 1)
    {
        themdau(head, x);
        return;
    }

    node *temp = *head;
    node *newnode = makenode(x);
    for (int i = 0; i < k - 2; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}
void duyet(node *head)
{
    while (head != NULL)
    {
        cout << head->data.msv << " " << head->data.ten << " " << fixed << setprecision(2) << head->data.gpa << endl;
        head = head->next;
    }
}

int main()
{
    node *head = NULL;
    int t;
    cin >> t;
    while (t--)
    {
        int lc;
        cin >> lc;
        cin.ignore();
        if (lc == 1)
        {
            sv x;
            themdau(&head, x);
        }
        else if (lc == 2)
        {
            sv x;
            themcuoi(&head, x);
        }
        else
        {
            int k;
            cin >> k;
            cin.ignore();
            sv x;
            chengiua(&head, x, k);
        }
    }
    duyet(head);
}
