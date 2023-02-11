// Cho số tự nhiên N. Nhiệm vụ của bạn là hãy liệt kê tất cả các số có đúng ba ước số không vượt quá n. Ví dụ n=100, ta có các số 4, 9, 25, 49.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^12

// Output Format

// Đưa ra kết quả trên một dòng

// Sample Input 0

// 100
// Sample Output 0

// 4 9 25 49

// #include <iostream>
// #include <math.h>

// using namespace std;
// using ll = long long;

// // ham kiem tra so co dung 3 uoc so

// bool check(ll n)
// {
//     int cnt;
//     int dem = 0;
//     for (int i = 2; i <= sqrt(n); i++)
//     {
//         cnt = 0;
//         if (n % i == 0)
//         {
//             dem++;
//             while (n % i == 0)
//             {
//                 cnt++;
//                 n /= i;
//             }
//             if (dem > 1)
//             {
//                 return false;
//             }
//         }
//     }
//     if (n != 1 || cnt > 2 || cnt == 1)
//     {
//         return false;
//     }
//     return true;
// }

// int main()
// {
//     ll n;
//     cin >> n;
//     for (int i = 1; i <= n; i++)
//     {
//         if (check(i) == true)
//         {
//             cout << i << " ";
//         }
//     }
// }

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// ham liet ke so chinh phuong
int mang[1000001];
void check()
{
    for (int i = 0; i <= 1000000; i++)
    {
        mang[i] = 1;
    }
    mang[0] = mang[1] = 0;
    for (int i = 2; i <= sqrt(1000000); i++)
    {

        for (int j = i * i; j <= 1000000; j += i)
        {
            mang[j] = 0;
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    check();
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (mang[i] == 1)
        {
            cout << 1ll * i * i << " ";
        }
    }
}