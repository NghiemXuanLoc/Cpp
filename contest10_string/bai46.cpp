#include <iostream>
#include <string>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    ll n = 0;
    for (int i = 0; i < s.size(); i++)
    {
        n = n * 10 + s[i] - '0';
        n %= 4;
    }
    ll res = pow(1, n) + pow(2, n) + pow(3, n) + pow(4, n);
    cout << res % 5;
}