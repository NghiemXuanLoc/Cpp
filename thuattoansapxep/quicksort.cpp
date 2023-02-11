// do phuc tap cua thuat toan la O(NlongN)
// tu tuong bai toan phan hoach day thanh 2 mang sao cho day ben trai nho hon hoac bang chot
// day ben phai lon hon hoac bang chot

#include <iostream>
#include <algorithm>

using namespace std;

int phanhoach(int a[], int l, int r)
{
    int x = a[r];
    int i = l - 1;
    for (int j = l; j < r; j++)
    {
        if (a[j] <= a[r])
        {
            i++;
            swap(a[i], a[j]);
        }
    }
    i++;
    swap(a[i], a[r]);
    return i;
}

void quicksort(int a[], int l, int r)
{
    if (l >= r)
    {
        return;
    }
    int q = phanhoach(a, l, r);
    quicksort(a, l, q - 1);
    quicksort(a, q + 1, r);
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
    quicksort(a, 0, n - 1);
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}