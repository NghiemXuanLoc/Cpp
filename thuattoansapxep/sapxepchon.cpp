// do phuc tap cua thuat toan O(n^2)
// tu tuong cua bai toan : voi moi so i trong mang ta se chon so nho nhat tu i + 1 toi n - 1 sau do swap 2 gia tri cho nhau

#include <iostream>
#include <math.h>

#include <algorithm>
using namespace std;
using ll = long long;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    for (int i = 0; i < n - 1; i++)
    {
        int min_pos = i;
        for (int j = i + 1; j < n; j++)
        {
            if (a[min_pos] > a[j])
            {
                min_pos = j;
            }
        }
        swap(a[i], a[min_pos]);
    }
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
}