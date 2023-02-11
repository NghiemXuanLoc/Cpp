#include <iostream>
#include <string>

using namespace std;

struct node
{
    int data;
    node *next; // con tro kieu node luu dia chi cua node tiep theo.
};

// them 1 node moi vao dslk

node *makenode(int x)
{
    node *newnode = new node;
    newnode->data = x;
    newnode->next = NULL;
    return newnode;
}

// dem so luong phan tu trong dslk;

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

// duyet dslk

void duyet(node *head)
{
    while (head != NULL)
    {
        cout << head->data << " ";
        head = head->next;
    }
}

// them node moi vao dau dslk

void themdau(node **head, int x)
{
    node *newnode = makenode(x);
    newnode->next = *head; // dia chi ma con tro head luu
    *head = newnode;
}

// them node moi vao cuoi dslk

void themcuoi(node **head, int x)
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

// them node moi vao vi tri bat ki trong dslk

void insert(node **head, int x, int k)
{
    int n = dem(*head);
    if (k < 1 || k > n + 1)
    {
        cout << "vi tri chen khong hop le" << endl;
        return;
    }
    if (k == 1)
    {
        themdau(head, x);
        return;
    }
    node *newnode = makenode(x);
    node *temp = *head;
    for (int i = 1; i <= k - 2; i++)
    {
        temp = temp->next;
    }
    newnode->next = temp->next;
    temp->next = newnode;
}

// xoa node khoi dau dslk don

void xoadau(node **head)
{
    if (*head == NULL)
    {
        return;
    }
    node *temp = *head;
    *head = temp->next;
    //*head = (*head)->next;
    delete temp;
}

// xoa node khoi cuoi dslk don

void xoacuoi(node **head)
{
    node *temp = *head;
    if (*head == NULL)
    {
        return;
    }
    if (temp->next == NULL)
    {
        delete temp;
        *head = NULL;
        return;
    }
    while (temp->next->next != NULL)
    {
        temp = temp->next;
    }
    node *last = temp->next;
    temp->next = NULL;
    delete last;
}

// xoa node o giua dslk don

void xoagiua(node **head, int k)
{
    int n = dem(*head);
    if (k < 1 || k > n)
    {
        return;
    }
    if (k == 1)
    {
        xoadau(head);
    }
    else
    {
        node *temp = *head;
        for (int i = 1; i <= k - 2; i++)
        {
            temp = temp->next;
        }
        node *xoa = temp->next;
        temp->next = temp->next->next;
        delete xoa;
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
            insert(&head, x, k);
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

