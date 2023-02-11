// Cho mảng số nguyên A[] có N phần tử đã được sắp xếp theo thứ tự tăng dần. Hãy viết các hàm sau với độ phức tạp O(logN) : 1. Tìm vị trí xuất hiện đầu tiên của phần tử X trong mảng, nếu không tồn tại X in ra -1. 2. Tìm vị trí xuất hiện cuối cùng của phần tử X trong mảng, nếu không tồn tại X in ra -1. 3. Tìm vị trí xuất hiện đầu tiên của phần tử >= X trong mảng, nếu không tồn tại phần tử >=X in ra -1. 4. Tìm vị trí xuất hiện đầu tiên của phần tử > X trong mảng, nếu không tồn tại phần tử >X in ra -1. 5. Tìm số lần xuất hiện của phần tử X trong mảng sử dụng kết quả của hàm 1 và 2.

// Input Format

// Dòng đầu tiên là số nguyên dương N và X Dòng thứ 2 là N phần tử trong mảng, các phần tử viết cách nhau một dấu cách.

// Constraints

// 1<=N<=10^6; 0<=A[i],X<=10^6;

// Output Format

// In ra 5 dòng tương ứng với 5 kết quả của 5 hàm đề bài yêu cầu.

// Sample Input 0

// 10 1160
// 19 1600 2172 2921 3409 4185 4639 6098 6744 9192
// Sample Output 0

// -1
// -1
// 1
// 1
// 0

#include <iostream>

using namespace std;

// vi tri dau tien xuat hien trong mang

int dautien(int a[], int n, int x)
{
    int res = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (x == a[m])
        {
            res = m;
            r = m - 1;
        }
        else if (x < a[m])
        {
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}

// vi tri cuoi cung trong mang

int cuoicung(int a[], int n, int x)
{
    int res = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (x == a[m])
        {
            res = m;
            l = m + 1;
        }
        else if (x < a[m])
        {
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}

// vi tri xuat hien dau tien cua so lon hon hoac bang x

int dautien2(int a[], int n, int x)
{
    int res = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (x <= a[m])
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}

// vi tri xuat hien dau tien cua so lon hon x

int dautien3(int a[], int n, int x)
{
    int res = -1, l = 0, r = n - 1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (x < a[m])
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}

// so lan xuat hien cua phan tu x trong mang

void xuathien(int a[], int n, int x)
{
    int i = dautien(a, n, x), j = cuoicung(a, n, x);
    if (i != -1)
    {
        cout << j - i + 1 << endl;
    }
    else
        cout << "0" << endl;
}
int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << dautien(a, n, x) << endl;
    cout << cuoicung(a, n, x) << endl;
    cout << dautien2(a, n, x) << endl;
    cout << dautien3(a, n, x) << endl;
    xuathien(a, n, x);
}