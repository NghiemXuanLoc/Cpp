// Cho một số nguyên không âm N, hãy đếm số lượng chữ số của N.

// Input Format

// Số nguyên không âm N

// Constraints

// 0≤n≤10^18

// Output Format

// Số lượng chữ số của N.

// Sample Input 0

// 123452
// Sample Output 0

// 6

#include <iostream>
#include <math.h>

using ll = long long;
using namespace std;

// viest ham dem chu so cua n bang de quy

int cnt(ll n)
{
    if (n < 10)
    {
        return 1;
    }
    return 1 + cnt(n / 10);
}

int main(){
    ll n;
    cin >> n;
    cout << cnt(n) << endl;   
}