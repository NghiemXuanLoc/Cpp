// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy sắp xếp các phần tử trong ma trận theo cột theo thứ tự tăng dần.

// Input Format

// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Constraints

// 1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9;

// Output Format

// In ra ma trận sau khi đã sắp xếp theo cột tăng dần.

// Sample Input 0

// 3
// 1 2 3
// 5 5 2
// 1 4 7
// Sample Output 0

// 1 2 2
// 1 4 3
// 5 5 7
#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n][n], b[n][n];

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cin >> a[i][j];
            b[j][i] = a[i][j];
        }
    }
    for (int i = 0; i < n; i++)
    {
        sort(b[i], b[i] + n);
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            cout << b[j][i] << " ";
        }
        cout << endl;
    }
}