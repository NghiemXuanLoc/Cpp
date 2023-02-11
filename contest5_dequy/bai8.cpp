// Cho 2 số a và b, hãy tính ước chung lớn nhất và bội chung nhỏ nhất của 2 số a và b. Trong đó hàm UCLN sử dụng đệ quy để tính.

// Input Format

// 2 số nguyên dương a và b.

// Constraints

// 1≤a,b≤10^12;

// Output Format

// In ra UCLN và BCNN của 2 số. Dữ liệu đảm bảo UCLN của 2 số nằm trong khoảng số nguyên 64 bit.

// Sample Input 0

// 10 20
// Sample Output 0

// 10 20

#include <math.h>
#include <iostream>

using ll = long long;
using namespace std;

// ham de quy tinh ucln

ll ucln(ll a, ll b)
{
    if (b == 0)
    {
        return a;
    }
    else
        return ucln(b, a % b);
}

// ham tim boi chung nho nhat

ll bcnn(ll a, ll b)
{
    return a / ucln(a, b) * b;
}

int main()
{
    ll a, b;
    cin >> a >> b;
    cout << ucln(a, b) << " " << bcnn(a, b) << endl;
}