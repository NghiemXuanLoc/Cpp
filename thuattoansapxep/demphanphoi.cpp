// do phuc tap thuat toan la O(n^2)
// dk ap dung phai tao duoc 1 mang lon hon kich thuoc cua so lon nhat trong mang
// tu tuong bai toan : tim phan tu lon nhat trong mang , dung mang dem dem cac phan tu trong mang , dung for in cac gia tri ra ngoai

#include <iostream>
#include <algorithm>

using namespace std;

int dem[1000001] = {0};

void demphanphoi(int a[], int n)
{
    int max = INT_MIN;
    for (int i = 0; i < n; i++)
    {
        dem[a[i]]++;
        if (a[i] > max)
        {
            max = a[i];
        }
    }
    for (int i = 0; i <= max; i++)
    {
        if (dem[i])
        {
            for (int j = 0; j < dem[i]; j++)
            {
                cout << i << " ";
            }
        }
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
    demphanphoi(a, n);
}