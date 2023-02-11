#include <iostream>
#include <string>
#include <iomanip>

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

// them 1 node vao cuoi dslk;

void themcuoi(node **head, int x)
{
    node *newnode = makenode(x);
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
// ham dem so luong phan tu trong dslk;
int size(node *head)
{
    int cnt = 0;
    while (head != NULL)
    {
        cnt++;
        head = head->next;
    }
    return cnt;
}

// xoa dau

void xoadau(node **head){
    if (*head == NULL)
    {
        return;
    }
    node *temp = *head;
    *head = temp->next;
    delete temp;
}
// xoa 1 node o vi tri thu k

void xoagiua(node **head, int x, int k)
{
    int n = size(*head);
    node *temp = *head;
    if (k < 1 || k > n)
    {
        return;
    }
    if (k == 1)
    {
        xoadau(head);
        return;
    }
    for (int i = 0; i < k - 2; i++)
    {
        temp = temp->next;
    }
    node *last = temp->next;
    temp->next = temp->next->next;
    delete last;
}

// duyet dslk;

void duyet(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// tim kiem vi tri cua 1 phan tu trong dslk don

int timkiem(node *head, int x)
{
    node *temp = head;
    int res = -1, n = size(head);
    for (int i = 1; i <= n; i++)
    {
        if (temp->data == x)
        {
            res = i;
            break;
        }
        temp = temp->next;
    }
    return res;
}

int main()
{
    node *head = NULL;
    int n, x;
    cin >> n >> x;
    int c = n;
    while (c--)
    {
        int t;
        cin >> t;
        themcuoi(&head, t);
    }
    while (n--)
    {
        if (timkiem(head, x) != -1)
        {
            int temp = timkiem(head, x);
            xoagiua(&head, x, temp);
        }
    }
    if (size(head) != 0)
    {
        duyet(head);
    }
    else
        cout << "EMPTY" << endl;
}