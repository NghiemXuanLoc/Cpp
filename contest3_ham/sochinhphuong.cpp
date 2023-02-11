// Kiểm tra một số nguyên có phải là số chính phương hay không? Định nghĩa số chính phương: https://vi.wikipedia.org/wiki/S%E1%BB%91_ch%C3%ADnh_ph%C6%B0%C6%A1ng

// Input Format

// Một số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// In ra YES nếu N là số chính phương, ngược lại in NO

// Sample Input 0

// 169
// Sample Output 0

// YES

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;
// ham kiem tra so chinh phuong

bool check(ll n)
{
    int x = sqrt(n);
    ll kq = 1ll * x * x;
    if (kq == n)
    {
        return true;
    }
    else
        return false;
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