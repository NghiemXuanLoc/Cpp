// Đếm số lượng các số chính phương trong đoạn từ a tới b

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a≤b≤10^18

// Output Format

// Số lượng số chính phương trong đoạn [a, b]

// Sample Input 0

// 1 50
// Sample Output 0

// 7
// Sample Input 1

// 101 101
// Sample Output 1

// 0

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// dem so luong chu so chinh phuong

int check(ll a, ll b)
{
    int dem = 0;
    if (a)
    {
        for (int i = sqrt(a); i <= sqrt(b); i++)
        {
            if (1ll * i * i >= a)
            {
                dem++;
            }
        }
    }

    return dem;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << check(a, b) << endl;
}