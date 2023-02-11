// Đối với số nguyên dương n hãy xác định hàm f: f(n) = - 1 + 2 - 3 + .. + (- 1)^n * n Nhiệm vụ của bạn là tính f (n) cho một số nguyên n đã cho

// Input Format

// Số nguyên dương n

// Constraints

// 1≤n≤10^16

// Output Format

// Kết quả của bài toán

// Sample Input 0

// 12734
// Sample Output 0

// 6367

// #include <iostream>
// #include <math.h>

// using namespace std;
// using ll = long long;

// // ham tinh tong

// void check(ll n)
// {
//     if (n % 2 == 0)
//     {
//         cout << n / 2 << endl;
//     }
//     else
//         cout << -1 * (n / 2 + 1) << endl;
// }

// int main()
// {
//     ll n;
//     cin >> n;
//     check(n);
// }

 

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// ham tinh tong

void check(ll n)
{
    if (n % 2 == 0)
    {
        cout << n / 2 << endl;
    }
    else
        cout << -1 * (n / 2 + 1) << endl;
}

int main()
{
    ll n;
    cin >> n;
    check(n);
}