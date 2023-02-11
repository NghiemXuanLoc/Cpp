// In ra số lượng chữ số 0 liên tiếp tính từ cuối của N! Ví dụ bạn có N = 10, 10!= 3628800. Như vậy, 10! có 2 chữ số 0 liên tiếp tính từ cuối.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// In ra số lượng chữ số 0 liên tiếp tính từ cuối của N!. Kết quả lấy dư với 1000000007.

// Sample Input 0

// 10
// Sample Output 0

// 2

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// ham kiem tra chu so 0 lien tiep tu cuoi cua N!

ll check(ll n)
{
    ll cnt = 0;
    ll res = 0;
    for (ll i = 5; i <= n; i *= 5)
    {
        cnt += n / i;
        res = cnt;
        res %= 1000000007;
    }
    return res;
}

int main()
{
    ll n;
    cin >> n;
    cout << check(n) << endl;
}