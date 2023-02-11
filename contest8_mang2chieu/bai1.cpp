// Cho ma trận cỡ NxM gồm N hàng, mỗi hàng M cột. Hãy liệt kê các số nguyên tố theo từng hàng trong ma trận.

// Input Format

// Dòng đầu tiên là 2 số N và M. N dòng tiếp theo mỗi dòng có M số.

// Constraints

// 1≤n,m≤500; Các phần tử trong ma trận là số dương không quá 10^9.

// Output Format

// In ra các số nguyên tố trong ma trận theo từng dòng

// Sample Input 0

// 3 3
// 1 2 3
// 4 5 6
// 7 8 9
// Sample Output 0

// 2 3
// 5
// 7

#include <iostream>
#include <math.h>

using namespace std;

// ham kiem tra so nguyen to

bool snt(int n)
{
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return n > 1;
}

int main()
{
    int n, m;
    cin >> n >> m;
    int a[n][m];
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < m; j++)
        {
            if (snt(a[i][j]))
            {
                cout << a[i][j] << " ";
            }
        }
        cout << endl;
    }
}