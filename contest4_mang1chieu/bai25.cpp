// Cho dãy số A[] gồm có N phần tử, các phần tử trong mảng chỉ là 0 1 hoặc 2. Hãy sắp xếp các phần tử trong mảng theo thứ tự tăng dần.

// Input Format

// Dòng đầu tiên là số nguyên N. Dòng tiếp theo gồm N số nguyên A[i]

// Constraints

// 1≤ N ≤ 10^7; 0 ≤ A[i] ≤ 2

// Output Format

// In ra mảng được sắp xếp tăng dần.

// Sample Input 0

// 5
// 1 1 0 2 1
// Sample Output 0

// 0 1 1 1 2

#include <iostream>
#include <algorithm>

using namespace std;

int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    // cach 1

    // sort(a, a + n);
    // for (int i = 0; i < n; i++)
    // {
    //     cout << a[i] << " ";
    // }

    // cach 2
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 0)
        {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 1)
        {
            cout << a[i] << " ";
        }
    }
    for (int i = 0; i < n; i++)
    {
        if (a[i] == 2)
        {
            cout << a[i] << " ";
        }
    }
}