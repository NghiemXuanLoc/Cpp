// Cho 2 số nguyên không âm a và b. Hãy tính a^b%(10^9+7). Kiến thức bạn cần sử dụng là Binayr Exponentiation.

// image

// Input Format

// 2 số nguyên dương a, b

// Constraints

// 1≤a,b≤10^9

// Output Format

// In ra kết quả của bài toán.

// Sample Input 0

// 2 10
// Sample Output 0

// 1024

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

ll kq(int a, int b)
{
    ll x = 1;
    for (int i = 0; i < b / 2; i++)
    {
         x = x * a;
        x %= 1000000007;
    }
    return x;
}



ll check(int a, int b, ll c)
{
    if (b == 0)
    {
        return a;
    }else if (b % 2 == 0)
    {
        return 
    }
    
}

