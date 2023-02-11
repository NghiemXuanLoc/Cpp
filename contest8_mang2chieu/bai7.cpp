// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy hoán vị các phần tử trên 2 hàng của ma trận.

// Input Format

// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số. Dòng tiếp theo là 2 hàng u, v cần hoán vị.

// Constraints

// 1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9; 1≤u,v≤200

// Output Format

// In ra ma trận sau khi hoán vị 2 hàng.

// Sample Input 0

// 3
// 1 2 3
// 4 5 6
// 7 8 9
// 1 3
// Sample Output 0

// 7 8 9
// 4 5 6
// 1 2 3

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
        }
    }

    int u, v;
    cin >> u >> v;

    int x = 0, k = 0;

    for (int i = 0; i < n; i++)
    {
        swap(a[u - 1][x], a[v - 1][k]);
        x++;
        k++;
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << a[i][j] << " ";
        }
        cout << endl;
    }
}