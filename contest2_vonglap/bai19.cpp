// Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤n≤100

// Output Format

// In ra hình sao theo mẫu

// Sample Input 0

// 5
// Sample Output 0

// *****
// *****
// *****  hinh 1
// *****
// *****

// *****
// *   *
// *   * hinh 2
// *   *
// *****

// *****
// *###*
// *###* hinh 3
// *###*
// *****

// 1 1 1 1 1
// 2       2
// 3       3 hinh 4
// 4       4
// 5 5 5 5 5

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;
    // hinh so 1
    for (int i = 1; i <= n; i++) // vong for dai dien so hang
    {
        for (int j = 1; j <= n; j++) // vong for dai dien so cot
        {
            cout << "*";
        }
        cout << endl;
    }
    cout << endl;

    // hinh so 2

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            if (j > 1 && j < n && i != 1 && i != n)
            {
                cout << " ";
            }
        }
        cout << endl;
    }

    cout << endl;

    // hinh so 3
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1 || i == n || j == 1 || j == n)
            {
                cout << "*";
            }
            if (j > 1 && j < n && i != 1 && i != n)
            {
                cout << "#";
            }
        }
        cout << endl;
    }

    cout << endl;

    // hinh so 4

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == 1)
            {
                cout << "1 ";
            }
            if (i == n && i != 1)
            {
                cout << n << " ";
            }
            if ((j == 1 || j == n) && i > 1 && i < n)
            {
                cout << i << " ";
            }
            if (i != 1 && i != n && j > 1 && j < n)
            {
                cout << " " << " ";
            }
            
        }
        cout << endl;
    }
}