// do phuc tap thuat toan O(NlogN)
// tu tuong bai toan chia mang ban dau thanh nhieu mang con da duoc sap xep va sau do tron tat ca cac mang
// voi nhau tao thanh 1 mang moi chua day du cac phan tu trong mang ban dau

#include <iostream>
#include <math.h>
#include <vector>

using namespace std;
using ll = long long;

// ham tron mang

void merge(int a[], int l, int m, int r)
{
    vector<int> x(a + l, a + m + 1);
    vector<int> y(a + m + 1, a + r + 1);
    int i = 0, j = 0;
    while (i < x.size() && j < y.size())
    {
        if (x[i] <= y[j])
        {
            a[l++] = x[i++];
        }
        else
            a[l++] = y[j++];
    }

    while (i < x.size())
    {
        a[l++] = x[i++];
    }
    while (j < y.size())
    {
        a[l++] = y[j++];
    }
}

void mergesort(int a[], int l, int r)
{
    if (l < r)
    {
        int m = (l + r) / 2;
        mergesort(a, m + 1, r);
        mergesort(a, l, m);
        merge(a, l, m, r);
    }
}

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    mergesort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}