// Cho phân tích thừa số nguyên tố của một số nguyên dương N, hãy đếm số lượng ước số của số nguyên dương đó. Ví dụ N = 60 = 2^2 * 3^1 * 5^1.

// Input Format

// Dòng đầu tiên là T : số lượng thừa số nguyên tố khác nhau của N T dòng tiếp theo, mỗi dòng là 2 số nguyên p và e lần lượt là thừa số nguyên tố và số mũ tương ứng

// Constraints

// 1≤T≤100; 2≤p≤100000; 1≤e≤100000;

// Output Format

// In ra số lượng ước số của N, vì kết quả quá lớn, hãy lấy dư với số 1000000007 (1e9 + 7)

// Sample Input 0

// 3
// 2 2
// 3 1
// 5 1
// Sample Output 0

// 12

// cach so 1 tinh truong hop tong quat nhat

// #include <iostream>
// #include <math.h>

// using namespace std;
// using ll = long long;

// // phan tich thua so nguyen to

// ll check(ll n)
// {
//     ll sum = 1;
//     int cnt;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         cnt = 0;
//         if (n % i == 0)
//         {
//             while (n % i == 0)
//             {
//                 cnt++;
//                 n /= i;
//             }
//             sum *= (cnt + 1);
//         }
//     }
//     if (n != 1)
//     {
//         sum *= 2;
//     }
//     return sum;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     cout << check(n) << endl;
// }

// cach so 2 lam chi tiet

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// ham tinh so luong uoc so tong quat

int check(int a, int b)
{

    int sum = (b + 1);
    return sum;
}

int main()
{
    int t;
    cin >> t;
    ll tich = 1;
    while (t--)
    {
        int a, b;
        cin >> a >> b;
        tich *= check(a, b);
        tich %= 1000000007;
    }
    cout << tich << endl;
}