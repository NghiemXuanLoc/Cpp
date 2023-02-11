// Cho số nguyên không âm N, hãy kiểm tra xem tất cả các chữ số của N có phải đều là số chẵn hay không?

// Input Format

// Số nguyên không âm N.

// Constraints

// 0≤n≤10^18

// Output Format

// In ra YES nếu n toàn chữ số chẵn, ngược lại in ra NO.

// Sample Input 0

// 2280820
// Sample Output 0

// YES

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

bool check(ll n)
{
    if (n == 0)
    {
        return true;
    }
    else if (n % 2 == 1)
    {
        return false;
    }
    else
        return check(n / 10);
}

int main()
{
    ll n;
    cin >> n;
    if (check(n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}