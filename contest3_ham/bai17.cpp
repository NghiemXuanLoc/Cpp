// Số hoàn hảo là số có tổng các ước thực sự (Không tính chính nó) bằng chính số đó. Cho một số nguyên dương n, kiểm tra xem n có phải là số hoàn hảo hay không.

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤9*10^18

// Output Format

// In YES nếu N là số hoàn hảo, ngược lại in NO

// Sample Input 0

// 28
// Sample Output 0

// YES

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// kiem tra so hoan hao
bool check(ll n)
{

    for (int i = 1; i <= 32; i++)
    {
        if (1ll * pow(2, i - 1) * (pow(2, i) - 1) == n)
        {
            return true;
        }
    }
    return false;
}
int main()
{
    ll n;
    cin >> n;
    if (check(n))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}
