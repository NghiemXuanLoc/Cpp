// Cho mảng a gồm n phần tử và số nguyên dương k. Đếm số lượng cặp số ai, aj (i != j) có tổng lớn hơn k.

// Input Format

// Dòng thứ 1 là số lượng phần tử trong mảng và số nguyên dương k; Dòng thứ 2 là n phần tử trong mảng

// Constraints

// 2<=n<=10^6; 1<=k<=10^6; 0<=a[i]<=10^6;

// Output Format

// In ra số lượng cặp số có tổng lớn hơn k

// Sample Input 0

// 4 5
// 2 3 4 5
// Sample Output 0

// 5

#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

// tim vi tri dau tien cua so lon hon x

int firstpos(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] > x)
        {
            res = m;
            r = m - 1;
        }
        else
            l = m + 1;
    }
    return res;
}

int main()
{
    int n, k;
    cin >> n >> k;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    ll ans = 0;
    sort(a, a + n);
    for (int i = 0; i < n; i++)
    {
        int index = firstpos(a, i + 1, n - 1, k - a[i]);
        if (index != -1)
        {
            ans += n - 1 - index + 1;
        }
        
    }
    cout << ans << endl;
}