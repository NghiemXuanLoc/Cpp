// Nhập n là một số nguyên không quá 100. In ra các hình tương ứng, mỗi hình cách nhau một dòng trống.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤n≤100

// Output Format

// In ra hình số theo mẫu

// Sample Input 0

// 5
// Sample Output 0

// 1 2 3 4 5
// 6 7 8 9 10
// 11 12 13 14 15
// 16 17 18 19 20    hinh 1
// 21 22 23 24 25

// 1 2 3 4 5
// 2 3 4 5 6
// 3 4 5 6 7         hinh 2
// 4 5 6 7 8
// 5 6 7 8 9

// ~~~~1
// ~~~22
// ~~333             hinh 3
// ~4444
// 55555

// 1
// 2 6
// 3 7 10            hinh 4
// 4 8 11 13
// 5 9 12 14 15

#include <iostream>

using namespace std;

int main()
{
    int n, hv1 = 1;
    cin >> n;

    // hinh ve so 1

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            cout << hv1 << " ";
            hv1++;
        }
        cout << endl;
    }

    cout << endl;

    // hinh ve so 2

    for (int i = 1; i <= n; i++)
    {
        int hv2 = i;

        for (int j = 1; j <= n; j++)
        {
            cout << hv2 << " ";
            hv2++;
        }
        cout << endl;
    }

    cout << endl;

    // hinh ve so 3

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i < n && j >= i && j < n)
            {
                cout << "~";
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (j <= i)
            {
                cout << i;
            }
        }

        cout << endl;
    }

    cout << endl;

    // hinh ve so 4

    for (int i = 1; i <= n; i++)
    {
        int temp = n - 1;
        int nho = i + temp;
        for (int j = 1; j <= n; j++)
        {
            if (j == 1)
            {
                cout << i << " ";
            }
            if (j > 1 && j <= i)
            {
              cout << nho << " ";
              nho += --temp; 
            }
        }

        cout << endl;
    }
}
