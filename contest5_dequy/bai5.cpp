// Tính n giai thừa bằng đệ quy.

// Input Format

// Số nguyên dương N.

// Constraints

// 0≤n≤10;

// Output Format

// Kết quả của N!

// Sample Input 0

// 6
// Sample Output 0

// 720

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// viet ham de quy tinh giai thua

ll s(int n)
{
    if (n == 0)
    {
        return 1;
    }
    else
        return n * s(n - 1);
}

int main()
{
    int n;
    cin >> n;
    cout << s(n) << endl;
}