// Cho một số nguyên không âm N, hãy in ra N theo thứ tự các chữ số từ trái qua phải và từ phải qua trái. Chú ý phải sử dụng hàm đệ quy cho cả 2 yêu cầu.

// Input Format

// Số nguyên không âm N.

// Constraints

// 0≤n≤10^18

// Output Format

// Dòng đầu tiên in ra các chữ số của n theo thứ tự từ trái qua phải. Dòng thứ hai in ra các chữ số của n theo thứ tự từ phải qua trái. Các chữ số được viết cách nhau một dấu cách.

// Sample Input 0

// 21218
// Sample Output 0

// 2 1 2 1 8
// 8 1 2 1 2

// #include <iostream>
// #include <math.h>

// using ll = long long;
// using namespace std;

// void check(ll n)
// {
//     if (n < 10)
//     {
//         cout << n << " ";
//     }
//     else if (n >= 10)
//     {
//         cout << n % 10 << " ";
//         return check(n / 10);
//     }
// }

// int daoso(ll n)
// {
//     ll res = 0;
//     while (n)
//     {
//         res = 1ll * res * 10 + n % 10;
//         n /= 10;
//     }
//     return res;
// }

// int main()
// {
//     ll n;
//     cin >> n;
//     cout << daoso(n) << endl;

// }

#include <iostream>

using namespace std;
using ll = long long;

void check(long long n)
{
    if (n < 10)
    {
        cout << n << " ";
    }
    else
    {
        check(n / 10);
        cout << n % 10 << " ";
    }
}
void check2(ll n)
{
    if (n < 10)
    {
        cout << n << " ";
    }
    else
    {
        cout << n % 10 << " ";
        check2(n / 10);
    }
}
int main()
{
    long long n;
    cin >> n;
    check(n);
    cout << endl;
    check2(n);
}