// Cho một mảng số nguyên A gồm N phần tử, hãy kiểm tra xem mảng có phải toàn số chẵn hay không?

// Input Format

// Dòng đầu tiên là số nguyên dương N; Dòng thứ 2 là N số nguyên trong mảng được viết cách nhau một dấu cách.

// Constraints

// 1≤n≤1000; 1≤A[i]≤10^6

// Output Format

// In ra YES nếu mảng toàn số chẵn, ngược lại in ra NO.

// Sample Input 0

// 4
// 2 8 10 20012
// Sample Output 0

// YES

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// ham de quy kiem tra mang

bool check(int a[], int n)
{
    if (n == 0 && a[n] % 2 == 0)
    {

        return true;
    }
    else if (a[n - 1] % 2 == 1)
    {
        return false;
    }
    return check(a, n - 1);
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
    if (check(a, n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}