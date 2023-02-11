// Liệt kê các số chính phương dương và không vượt quá n

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^10.

// Output Format

// Liệt kê các số chính phương không vượt quá n

// Sample Input 0

// 50
// Sample Output 0

// 1 4 9 16 25 36 49

#include <math.h>
#include <iostream>

using namespace std;
using ll = long long;

int main()
{
    ll n;
    cin >> n;
    int x = sqrt(n);
    ll kq = x * x;
    if (n == kq)
    {
        for (int i = 1; i < sqrt(n); i++)
        {
            cout << 1ll * i * i << " ";
        }
    }
    else
    {
        for (int i = 1; i <= sqrt(n); i++)
        {
            cout << 1ll * i * i << " ";
        }
    }
}