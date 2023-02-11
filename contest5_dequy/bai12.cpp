// Cho một số nguyên không âm N, hãy in ra dạng biểu diễn của N dưới hệ 16.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Biểu diễn hệ 16 của số nguyên N.

// Sample Input 0

// 995
// Sample Output 0

// 3E3

#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

void check(ll n)
{
    if (n < 16)
    {
        if (n <= 9)
        {
            cout << n;
        }
        else
            cout << (char)(n + 55);
    }
    else
    {
        int r = n % 16;
        check(n / 16);
        if (r <= 9)
        {
            cout << r;
        }
        else
            cout << (char)(r + 55);
    }
}

int main(){
    ll n;
    cin >> n;
    check(n);
}