// Kiểm tra xem một số có số lượng ước số của nó là số lẻ

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^18

// Output Format

// In ra YES nếu N là số có số ước là số lẻ, ngược lại in NO.

// Sample Input 0

// 100
// Sample Output 0

// YES

// cach so 1 chua tối ưu thời gian chạy

// #include <iostream>
// #include <math.h>

// using ll = long long;
// using namespace std;

// // ham phan tich thua so nguyen to roi tinh tong cac uoc cua no

// int check(ll n)
// {
//     int cnt;
//     int res = 1;

//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         cnt = 0;
//         while (n % i == 0)
//         {
//             cnt++;
//             n /= i;
//         }
//         res *= (cnt + 1);
//     }
//     if (n != 1)
//     {
//         res *= 2;
//     }
//     return res % 2 == 1;
// }

// int main()
// {
//     ll n;
//     cin >> n;
//     if (check(n))
//     {
//         cout << "YES" << endl;
//     }
//     else
//         cout << "NO" << endl;
// }

// cách số 2 đã tối ưu thời gian chạy

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// mang kiem tra so chinh phuong

bool check(ll n)
{
    int res = sqrt(n);
    ll kq = 1ll * res * res;
    return kq == n;
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
