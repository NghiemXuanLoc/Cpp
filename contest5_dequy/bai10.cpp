// Tính tổng S(n) = 1/1 + 1/2 + 1/3 + ... + 1/n bằng đệ quy.

// Input Format

// Số nguyên dương n.

// Constraints

// 1≤n≤1000;

// Output Format

// In ra S(n) lấy 3 số sau dấu phẩy.

// Sample Input 0

// 18
// Sample Output 0

// 3.495

#include <iostream>
#include <math.h>
#include<iomanip>

using ll = long long;
using namespace std;

// viet ham de quy tinh tong s(n);

float s(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return 1.0 * 1 / n + s(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << fixed << setprecision(3) << s(n) << endl;
}