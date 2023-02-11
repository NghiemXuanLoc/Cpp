// Tính a^b%1000000007 với a,b nguyên không âm.

// Input Format

// 2 số nguyên không âm a và b

// Constraints

// 1≤a,b≤10^12

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 2 10
// Sample Output 0

// 1024

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// ham luy thua

ll check(ll a, ll b)
{
    ll res = 1;
    for (int i = 1; i <= b; i++)
    {
        ll temp = a % 1000000007;
        res *= temp;
        res %= 1000000007;
    }
    return res;
}
ll check2(ll a, ll b)
{
    ll temp;
    if (b % 2 == 0)
    {
        ll c = b / 2;
        temp = check(a, c);
        temp = temp * temp % 1000000007;
    }
    else if (b % 2 != 0)
    {
        ll c = b / 2;
        ll temp = check(a, c);
        temp = ((a % 1000000007) * ((temp * temp) % 1000000007)) % 1000000007;
    }
    return temp;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << check2(a, b) << endl;
}