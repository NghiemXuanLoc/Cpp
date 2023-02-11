// Một số được gọi là “lộc phát” nếu chỉ có các chữ số 0,6,8. Nhập vào một số nguyên hãy kiểm tra xem đó có phải số lộc phát hay không. Nếu đúng in ra 1, sai in ra 0.

// Input Format

// Số nguyên n

// Constraints

// 0≤n≤10^18

// Output Format

// In ra 1 nếu n là số lộc phát, ngược lại in 0

// Sample Input 0

// 60806
// Sample Output 0

// 1

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// kiem tra so loc phat

bool check(ll n)
{
    while (n)
    {
        int res = n % 10;
        if (res == 1 || res == 2 || res == 3 || res == 4 || res == 5 || res == 7 || res == 9)
        {
            return false;
        }
        n /= 10;
    }
    return true;
}

int main()
{
    ll n;
    cin >> n;
    if (check(n))
    {
        cout << "1" << endl;
    }
    else
        cout << "0" << endl;
}