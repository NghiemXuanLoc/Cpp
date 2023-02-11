#include <iostream>
#include <algorithm>
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

struct phanso
{
    ll tu, mau;

    void toigian()
    {
        ll uc = gcd(tu, mau);
        tu /= uc;
        mau /= uc;
    }
};

int main()
{
    phanso a;
    cin >> a.tu >> a.mau;
    a.toigian();
    cout << a.tu << "/" << a.mau << endl;
}