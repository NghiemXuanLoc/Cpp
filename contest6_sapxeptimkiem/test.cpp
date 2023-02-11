#include <iostream>
#include <algorithm>

using namespace std;

int bs(int a[], int n, int x)
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

int main()
{
    int n, x;
    cin >> n >> x;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    cout << bs(a, n, x) << endl;
}