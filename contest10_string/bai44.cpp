#include <iostream>
#include <string>

using namespace std;
using ll = long long;

const int MOD = 1000000007;

ll mod(string a, ll b)
{
    ll du = 0;
    for (int i = 0; i < a.size(); i++)
    {
        du = du * 10 + (a[i] - '0');
        du %= b;
    }
    return du;
}

ll powmod(ll a, ll b, ll c)
{
    ll res = 1;
    while (b)
    {
        if (b % 2)
        {
            res *= a;
            res %= c;
        }
        a = a * a;
        a %= c;
        b /= 2;
    }
    return res;
}

int main()
{
    string n;
    ll m;
    cin >> n >> m;
    ll du = mod(n, MOD);
    cout << powmod(du, m, MOD) << endl;
}