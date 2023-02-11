// Cho một số nguyên không âm N, hãy in ra chữ số đầu tiên của N.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// In ra chữ số đầu tiên của N.

// Sample Input 0

// 56721
// Sample Output 0

// 5

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

int check(ll n)
{
    if (n < 10)
    {
        return n;
    }
    return check(n / 10);
}

int main(){
    ll n;
    cin >> n;
    cout << check(n) << endl;
}