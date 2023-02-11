// Tính tổng ước của số nguyên dương n. Độ phức tạp mong đợi O(logn)

// Input Format

// Số nguyên dương N

// Constraints

// 1≤N≤10^10.

// Output Format

// Tổng ước của N

// Sample Input 0

// 28
// Sample Output 0

// 56
#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    ll n, sum = 0;
    cin >> n;
    int x = sqrt(n);
    ll kq = 1ll*x*x;

    for (int i = 1; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            sum += n / i + i;
        }
        
    }
    if (n == kq)
    {
        sum -= sqrt(n);
    }
    
    cout << sum << endl;
}