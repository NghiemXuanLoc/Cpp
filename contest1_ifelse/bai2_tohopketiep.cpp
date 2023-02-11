#include <iostream>
#include <bits/stdc++.h>

using namespace std;
using ll = long long;

int main()
{
    int n, k;
    cin >> n >> k;
    bool ok = true;
    int a[n + 1];
    for (int i = 1; i <= k; i++)
    {
        cin >> a[i];
    }
    int temp = k;
    while (temp > 0 && a[temp] == n - k + temp)
    {
        temp--;
    }
    if (temp == 0)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << i << " ";
        }
        ok = false;
    }
    else
    {
        a[temp]++;
        for (int j = temp + 1; j <= k; j++)
        {
            a[j] = a[j - 1] + 1;
        }
    }
    if (ok)
    {
        for (int i = 1; i <= k; i++)
        {
            cout << a[i] << " ";
        }
    }
}