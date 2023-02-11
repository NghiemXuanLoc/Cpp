// Tìm ước chung lớn nhất và bội chung nhỏ nhất của 2 số nguyên

// Input Format

// 2 số nguyên a, b

// Constraints

// 1≤a,b≤10^12

// Output Format

// Ước chung lớn nhất và bội chung nhỏ nhất, dữ liệu đảm bảo BCNN của 2 số không vượt quá số int 64bit

// Sample Input 0

// 20 50
// Sample Output 0

// 10 100

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// ham uoc chung lon nhat

ll check1(ll a, ll b)
{
    while (b != 0)
    {
        ll du = a % b;
        a = b;
        b = du;
    }
    return a;
}

// ham tim boi chung nho nhat

ll check2(ll a, ll b)
{
    ll res = a / check1(a, b) * b;
    return res;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << check1(a, b) << " " << check2(a, b) << endl;
}
