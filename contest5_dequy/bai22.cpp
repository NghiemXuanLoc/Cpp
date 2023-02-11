
// Cho một mảng số nguyên A gồm N phần tử, hãy in ra mảng theo thứ tự từ trái qua phải và từ phải qua trái bằng đệ quy.

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

// Constraints

// 1≤n≤1000; 1≤A[i]≤10^6

// Output Format

// Dòng đầu tiên in ra các phần tử trong mảng theo chiều từ trái qua phải. Dòng thứ 2 in ra các phần tử trong mảng theo chiều từ phải qua trái.

// Sample Input 0

// 5
// 1 2 3 4 5
// Sample Output 0

// 1 2 3 4 5
// 5 4 3 2 1

#include <iostream>
#include <math.h>

using namespace std;


// in ngược mảng 

// void check(int a[], int n)
// {
//     if (n == 1)
//     {
//         cout << a[0];
//     }
//     else
//     {
//         cout << a[n - 1] << " ";
//         check(a, n - 1);
//     }
// }

// in xuôi mảng 

// void abc(int a[], int n, int i)
// {
//     if (i == n - 1)
//     {
//         cout << a[n - 1];
//     }
//     else
//     {
//         cout << a[i] << " ";
//         i++;
//         abc(a, n, i);
//     }
// }

// int main()
// {
//     int n;
//     cin >> n;
//     int a[n];
//     int i = 0;
//     for (int i = 0; i < n; i++)
//     {
//         cin >> a[i];
//     }
//     abc(a, n, i);
//     cout << endl;
//     check(a, n);
// }

// in xuoi mang 

void check(int a[], int n)
{
    if (n == 0)
    {
        cout << a[n] << " ";
    }
    else
    {
        check(a, n - 1);
        cout << a[n] << " ";
    }
}
int main()
{
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }
    check(a, n - 1);
}
