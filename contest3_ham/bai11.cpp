// Hãy phân tích một số nguyên dương N thành thừa số nguyên tố

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^16

// Output Format

// Phân tích thừa số nguyên tố của N, xem ví dụ để rõ hơn format.

// Sample Input 0

// 60
// Sample Output 0

// 2^2 * 3^1 * 5^1

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// phan tich thua so nguyen to

void check(ll n)
{
    int cnt;
    if (n == 1)
    {
        cout << "1" << endl;
    }

    for (int i = 2; i <= sqrt(n); i++)
    {
        cnt = 0;
        while (n % i == 0)
        {
            cnt++;
            n /= i;
        }
        if (cnt > 0)
        {
            cout << i << "^" << cnt;
            if (n != 1)
            {
                cout << " * ";
            }
        }
    }
    if (n != 1)
    {
        cout << n << "^"
             << "1";
    }
}

int main()
{
    ll n;
    cin >> n;
    check(n);
}
