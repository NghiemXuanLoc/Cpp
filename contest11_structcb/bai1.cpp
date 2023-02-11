#include <iostream>
#include <string>
#include <algorithm>
#include <math.h>

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
ll lcm(ll a, ll b)
{
    return (a * b) / gcd(a, b);
}

struct phanso
{
    ll tu, mau;
    void nhap()
    {
        cin >> tu >> mau;
    }
    void toigian()
    {
        int uc = gcd(tu, mau);
        tu /= uc;
        mau /= uc;
    }
    void in()
    {
        if (tu * mau < 0)
        {
            mau = abs(mau);
            if (tu > 0)
            {
                tu *= -1;
            }
        }
        cout << tu << '/' << mau << endl;
    }
};

phanso tong(phanso a, phanso b)
{
    ll bc = lcm(a.mau, b.mau);
    phanso c;
    c.tu = bc / a.mau * a.tu + bc / b.mau * b.tu;
    c.mau = bc;
    c.toigian();
    return c;
}

phanso hieu(phanso a, phanso b)
{
    ll bc = lcm(a.mau, b.mau);
    phanso c;
    c.tu = bc / a.mau * a.tu - bc / b.mau * b.tu;
    c.mau = bc;
    c.toigian();
    return c;
}


int main()
{
    phanso a, b;
    a.nhap();
    b.nhap();
    a.toigian();
    b.toigian();
    a.in();
    b.in();
    tong(a, b);
    hieu(a, b);
    tong(a, b).in();
    hieu(a, b).in();
}