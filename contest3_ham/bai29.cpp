// Cho số tự nhiên N và số nguyên tố P. Nhiệm vụ của bạn là tìm số x lớn nhất để N! chia hết cho p^x. Ví dụ với N=7, p=3 thì x=2 là số lớn nhất để 7! Chia hết cho 3^2.

// Input Format

// Cặp số N, p được viết cách nhau một khoảng trống.

// Constraints

// 1≤N≤10^14; 2≤p≤5000

// Output Format

// Đưa ra kết quả trên một dòng

// Sample Input 0

// 7 3
// Sample Output 0

// 2

// cach so 1 truong hop n < 10^8

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// tim so x lon nhat

int check(int n, int p)
{
    int cnt = 0;
    for (int i = p; i <= n; i += p)
    {
        int res = i;

        while (res % p == 0)
        {
            cnt++;
            res /= p;
        }
    }
    return cnt;
}

int main()
{
    ll n;
    int p;
    cin >> n >> p;
    cout << check(n, p) << endl;
}

// cach so 2 truong hop n > 10^8

// #include <iostream>
// #include <math.h>

// using namespace std;
// using ll = long long;

// int check(ll n, int p)
// {
//     int ans = 0;
//     int res = 1;
//     ll lt = p;
//     while (lt <= n)
//     {
//         ans += n / lt;
//         res++;
//         lt = pow(p, res);
//     }
//     return ans;
// }

// int main()
// {
//     ll n;
//     int p;
//     cin >> n >> p;
//     cout << check(n, p) << endl;
// }
