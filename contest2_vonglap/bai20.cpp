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

// *
// **
// ***  hinh 1
// ****
// *****

// *****
// ****
// ***    hinh 2
// **
// *

//     *
//    **
//   ***   hinh 3
//  ****
// *****

// *****
//  ****
//   ***   hinh 4
//    **
//     *

// *
// **
// * *   hinh 5
// *  *
// *****

#include <iostream>

using namespace std;

int main()
{
    int n;
    cin >> n;

    // ve hinh 1;

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n || j == 1 || j <= i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    cout << endl;

    // hinh ve 2

    for (int i = 1; i <= n; i++)
    {
        for (int j = n; j >= 1; j--)
        {
            if (i == 1 || j == n || j >= i)
            {
                cout << "*";
            }
        }
        cout << endl;
    }

    cout << endl;

    // ve hinh so 3

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (j <= (n - i))
            {
                cout << " ";
            }
        }
        for (int j = 1; j <= n; j++)
        {
            if (i == n || j == n || j < i)
            {
                cout << "*";
            }
        }

        cout << endl;
    }

    cout << endl;

    // hinh ve so 4

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i >= 2 && j >= 1 && j < i)
            {
                cout << " ";
            }
            
        }
        
        for (int j = n; j >= 1; --j)
        {
            if (i == 1 || j == 1 || j > i)
            {
                cout << "*";
            }

        }
        cout << endl;
    }

    cout << endl;
 //   hinh ve so 5

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= n; j++)
        {
            if (i == n || j == 1 || j == i )
            {
                cout << "*";
            }
            if (j > 1 && j < i && i != n)
            {
                cout << " ";
            }
            
        }
        cout << endl;
    }
}

