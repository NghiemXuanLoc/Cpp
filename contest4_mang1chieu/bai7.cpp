// Cho mảng số nguyên A[] gồm N phần tử, kiểm tra xem mảng có đối xứng hay không?

// Input Format

// Dòng đầu tiên là N : số lượng phần tử trong mảng; Dòng thứ 2 gồm N phần tử viết cách nhau một khoảng trống.

// Constraints

// 1<=N<=10^6; 0<=A[i]<=10^6

// Output Format

// In ra YES hoặc NO tương ứng với mảng đối xứng hoặc không.

// Sample Input 0

// 20
// 870 1069 2363 375 2188 6059 6775 495 643 832 832 643 495 6775 6059 2188 375 2363 1069 870
// Sample Output 0

// YES

#include <iostream>
#include <math.h>

using namespace std;

bool check(int a[], int n)
{
    int L = 0, R = n - 1;
    while (L <= R)
    {
        if (a[L] != a[R])
        {
            return false;
        }
        L++;
        R--;
    }
    return true;
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