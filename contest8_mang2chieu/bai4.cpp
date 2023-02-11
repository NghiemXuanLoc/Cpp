// Cho ma trận vuông cỡ NxN gồm N hàng, mỗi hàng N cột. Hãy đếm các số thuận nghịch thuộc tam giác dưới của ma trận trên.

// Input Format

// Dòng đầu tiên là số N. N dòng tiếp theo mỗi dòng có N số.

// Constraints

// 1≤n≤200; Các phần tử trong ma trận là số dương không quá 10^9.

// Output Format

// In ra số lượng số thuận nghịch trong ma trận.

// Sample Input 0

// 3
// 1 2 3
// 22 14 56
// 76 5 4
// Sample Output 0

// 4

#include <iostream>
#include <algorithm>

using namespace std;

// ham kiem tra so thuan nghich

bool check(int n)
{
    int res = n;
    int temp = 0;
    while (n)
    {
        temp = temp * 10 + n % 10;
        n /= 10;
    }
    return temp == res;
}

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

    int cnt = 0;

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n; j++)
        {
            if (j <= i && check(a[i][j]))
            {
                cnt++;
            }
        }
    }
    cout << cnt << endl;
}