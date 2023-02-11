#include <iostream>
#include <string>

using namespace std;
using ll = long long;

ll gcd(ll a, ll b)
{
    if (a % b == 0)
    {
        return b;
    }
    else
        return gcd(b, a % b);
}

int main()
{
    string a;
    ll x, y;
    cin >> a >> x >> y;
    for (int i = 0; i < gcd(x, y); i++)
    {
        cout << a;
    }
    
}