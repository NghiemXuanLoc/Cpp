// Cho mảng A[] gồm N phần tử và số X. Nhiệm vụ của bạn là tìm cặp phần tử A[i] - A[j] = X. Nếu tồn tại A[i] - A[j] = X đưa ra 1, ngược lại đưa ra -1.

// Input Format

// Dòng thứ nhất là cặp số N, X; Dòng tiếp theo là N số A[i] là các phần tử của mảng A[].

// Constraints

// 1≤ N ≤10^5; 1≤ X, A[i] ≤10^5.

// Output Format

// In ra 1 nếu tìm thấy một cặp số có hiệu bằng X, ngược lại in ra -1.

// Sample Input 0

// 5 3
// 1 1 2 3 5
// Sample Output 0

// 1

#include <iostream>
#include <algorithm>

using namespace std;

// tim vi tri xuat hien cua x

int abc(int a[], int l, int r, int x)
{
    int res = -1;
    while (l <= r)
    {
        int m = (l + r) / 2;
        if (a[m] == x)
        {
            res = m;
            return res;
        }
        else if (a[m] < x)
        {
            l = m + 1;
        }
        else
            r = m - 1;
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
    sort(a, a + n);
    int ok = 0;
    for (int i = 0; i < n; i++)
    {
        int index = abc(a, i + 1, n - 1, k + a[i]);
        if (index != -1)
        {
            ok = 1;
            break;
        }
    }

    if (ok == 1)
    {
        cout << "1";
    }
    else
        cout << "-1";
}