// In ra ma trận xoáy ốc cấp N, với các số trong ma trận đều là các số trong dãy Fibonacci.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤9

// Output Format

// Ma trận xoáy ốc cấp N

// Sample Input 0

// 3
// Sample Output 0

// 0 1 1
// 13 21 2
// 8 5 3

#include <iostream>
#include <algorithm>

using namespace std;
using ll = long long;

ll a[100];

void checkfibo()
{
    int cnt = 2;
    a[0] = 0, a[1] = 1;
    ll f2 = 0, f1 = 1;
    while (cnt <= 82)
    {
        ll fn = f2 + f1;
        f2 = f1;
        f1 = fn;
        a[cnt++] = fn;
    }
}

int main()
{
    checkfibo();
    int n;
    cin >> n;
    ll b[n][n];

    int cnt = 1;
    int temp = 0;
    int h1 = 0, h2 = n - 1, c1 = 0, c2 = n - 1;

    while (cnt <= n * n)
    {
        for (int i = c1; i <= c2; i++)
        {
            b[h1][i] = a[temp];
            temp++;
            cnt++;
        }
        h1++;
        for (int i = h1; i <= h2; i++)
        {
            b[i][c2] = a[temp];
            temp++;
            cnt++;
        }
        --c2;
        for (int i = c2; i >= c1; --i)
        {
            b[h2][i] = a[temp];
            temp++;
            cnt++;
        }
        --h2;
        for (int i = h2; i >= h1; --i)
        {
            b[i][c1] = a[temp];
            temp++;
            cnt++;
        }
        ++c1;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[i][j] << " ";
        }
        cout << endl;
    }
}
