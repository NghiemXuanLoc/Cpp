// Bạn được cung cấp một số nguyên x. Bạn có thể biểu diễn x bằng cách tổng của các số trong các số 11,111,1111,11111,… ( Các số mà bản thân nó chỉ chứa các chữ số 1)?(Bạn có thể sử dụng bất kỳ số nào trong số chúng bất kỳ số lần nào). Ví dụ, 33 = 11 + 11 + 11 144 = 111 + 11 + 11 + 11

// Input Format

// Số nguyên dương N

// Constraints

// 1≤n≤10^9

// Output Format

// Nếu bạn có thể tạo x bởi các số 11,111,1111,...., hãy xuất "YES" (không có dấu ngoặc kép). Nếu không, xuất "NO".

// Sample Input 0

// 144
// Sample Output 0

// YES
// Sample Input 1

// 69
// Sample Output 1

// NO

// #include <iostream>
// #include <math.h>

// using namespace std;

// // ham dem so luong chu so

// int check1(int n)
// {
//     int dem = 0;
//     while (n)
//     {
//         dem++;
//         n /= 10;
//     }
//     return dem;
// }

// // tao so co n chu so 1 va kiem tra

// int check2(int n)
// {
//     // int cnt = check1(n) - 1;
//     while (n > 10)
//     {
//         int res = 0;
//         for (int i = 1; i <= check1(n); i++)
//         {
//             res = (res * 10) + 1;
//         }
//         if (n >= res)
//         {
//             n %= res;
//         }
//         else
//             n %= (res / 10);
//     }
//     return n;
// }

// int main()
// {
//     int n;
//     cin >> n;
//     if (check2(n) == 0)
//     {
//         cout << "YES" << endl;
//     }
//     else
//         cout << "NO" << endl;
// }

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// dem so luong chu so
int check1(ll n)
{
    int dem = 0;
    while (n)
    {
        dem++;
        n /= 10;
    }
    return dem;
}

// ham dem so luong

int check2(ll n)
{
    ll res = 0;
    for (int i = 1; i <= check1(n); i++)
    {
        res = res * 10 + 1;
    }
    while (n > 10)
    {
        n %= res;
        res /= 10;
    }
    return n;
}

int main()
{
    ll n;
    cin >> n;
    if (check2(n) == 0)
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}