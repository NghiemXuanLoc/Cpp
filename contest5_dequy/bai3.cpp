// Tính tổng hàm S(n) = 1^3 + 2^3 + 3^3 + 4^3 + .. + n^3 bằng đệ quy. Nếu bạn chưa biết thì S(n) có thể tính nhanh bằng công thức S(n) = [(n * (n + 1) / 2)]^2

// Input Format

// Số nguyên dương n.

// Constraints

// 0≤n≤10^3; Chú ý các bạn phải code bằng đệ quy nhé.

// Output Format

// In ra kết quả của S(n)

// Sample Input 0

// 435
// Sample Output 0

// 8992728900

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// viet ham de quy tinh tong s(n);

ll s(int n)
{
    if (n == 1)
    {
        return 1;
    }
    else
        return pow(n, 3) + s(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << s(n) << endl;
}