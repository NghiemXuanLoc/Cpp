// Tính tổng S(n) = 1^2 + 2^2 + 3^2 + 4^2 + ... + n^2

// Input Format

// Số nguyên dương n

// Constraints

// 1≤N≤10^5

// Output Format

// S(n)

// Sample Input 0

// 3
// Sample Output 0

// 14

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;
int main()
{
    int n;
    cin >> n;
    ll sum = 0;
    for (int i = 1; i <= n; i++)
    {
        ll kq = pow(i, 2);
        sum += kq;
    }
    cout << sum << endl;
}