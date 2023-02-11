#include <iostream>
#include <string>

using namespace std;

struct node
{
    int data;
    node *next;
};

// tao 1 node moi de them vao dslk don

node *makenode(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

// dem so luong phan tu cua node

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

// ham duyet cac node trong dslk de in ra man hinh

void duyet(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// them 1 node vao dau dslk don

void themdau(node **head, int x)
{
    node *newnode = makenode(x);
    newnode->next = *head;
    *head = newnode;
}

// them 1 node vao cuoi dslk don

void themcuoi(node **head, int x)
{
    node *newnode = makenode(x);
    node *temp = *head;
    if (*head == NULL)
    {
        themdau(head, x);
    }
    else
    {
        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newnode;
    }
}

// them 1 node vao giua dslk don

void themgiua(node **head, int x, int k)
{
    node *newnode = makenode(x);
    int n = dem(*head);
    if (k < 1 || k > n + 1)
    {
        return;
    }
    else if (k == 1)
    {
        themdau(head, x);
    }
    else
    {
        node *temp = *head;
        for (int i = 0; i < k - 2; i++)
        {
            temp = temp->next;
        }
        newnode->next = temp->next;
        temp->next = newnode;
    }
}

// xoa 1 node khoi dau dslk don

void xoadau(node **head)
{
    int n = dem(*head);
    if (*head == NULL)
    {
        return;
    }
    else
    {
        node *temp = *head;
        *head = temp->next;
        delete temp;
    }
}

// xoa 1 node cuoi cung trong dslk don;

void xoacuoi(node **head)
{
    node *temp = *head;
    if (*head == NULL)
    {
        return;
    }
    if ((*head)->next == NULL)
    {
        *head = NULL;
        delete temp;
        return;
    }
    else
    {
        while (temp->next->next != NULL)
        {
            temp = temp->next;
        }
        node *last = temp->next;
        temp->next = NULL;
        delete last;
    }
}

// xoa 1 node o giua dslk don

void xoagiua(node **head, int k)
{
    int n = dem(*head);
    if (k < 1 || k > n)
    {
        return;
    }
    else if (k == 1)
    {
        xoadau(head);
    }
    else
    {
        node *temp = *head;
        for (int i = 0; i < k - 2; i++)
        {
            temp = temp->next;
        }
        node *xoa = temp->next;
        temp->next = temp->next->next;
        delete xoa;
    }
}

// sap xep dslk theo thu tu tu nho toi lon

void sort(node **head)
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
        int temp = min->data;
        min->data = i->data;
        i->data = temp;
    }
}
int main()
{
    node *head = NULL;
    while (1)
    {
        cout << "----------------------------" << endl;
        cout << "1. them node vao dau danh sach" << endl;
        cout << "2. them node vao cuoi danh sach" << endl;
        cout << "3. them node vao vi tri thu k" << endl;
        cout << "4. xoa node khoi dau danh sach" << endl;
        cout << "5. xoa node khoi cuoi danh sach" << endl;
        cout << "6. xoa node o vi tri thu k trong dslk" << endl;
        cout << "7. duyet node" << endl;
        cout << "0. thoat chuong trinh" << endl;
        cout << "----------------------------" << endl;
        int lc;
        cin >> lc;
        if (lc == 1)
        {
            int x;
            cout << "nhap x :";
            cin >> x;
            themdau(&head, x);
        }
        else if (lc == 2)
        {
            int x;
            cout << "nhap x :";
            cin >> x;
            themcuoi(&head, x);
        }
        else if (lc == 3)
        {
            int x, k;
            cout << "nhap x :";
            cin >> x;
            cout << "nhap vi tri muon chen :";
            cin >> k;
            themgiua(&head, x, k);
        }
        else if (lc == 4)
        {
            xoadau(&head);
        }
        else if (lc == 5)
        {
            xoacuoi(&head);
        }
        else if (lc == 6)
        {
            int k;
            cout << "nhap vi tri thu k muon xoa :" << endl;
            cin >> k;
            xoagiua(&head, k);
        }
        else if (lc == 7)
        {
            duyet(head);
            cout << endl;
        }
        else
            break;
    }
}