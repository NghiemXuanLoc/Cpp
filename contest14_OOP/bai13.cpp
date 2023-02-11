#include <iostream>
#include <string>
#include <math.h>

using namespace std;
using ll = long long;

class phanso
{
private:
    ll a1, a2, b1, b2;

public:
    phanso(ll a1, ll a2, ll b1, ll b2)
    {
        this->a1 = a1;
        this->a2 = a2;
        this->b1 = b1;
        this->b2 = b2;
    }
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
    string C()
    {
        ll res = lcm(a2, b2);
        ll tu, mau;
        tu = (a1 * (res / a2)) + (b1 * (res / b2));
        mau = res;
        tu = tu * tu;
        mau = mau * mau;
        ll temp = gcd(tu, mau);
        tu = tu / temp;
        mau = mau / temp;
        string ans = "";
        ans += to_string(tu) + "/" + to_string(mau);
        return ans;
    }

    void D()
    {
        ll tu, mau;
        string tuC, mauC;
        int j = 0;
        string temp = C();
        while (temp[j] != '/')
        {
            tuC += temp[j++];
        }
        j++;
        while (j < temp.size())
        {
            mauC += temp[j++];
        }
        tu = 1ll * a1 * b1 * stoi(tuC);
        mau = 1ll * a2 * b2 * stoi(mauC);
        ll res = gcd(tu, mau);
        tu = tu/res;
        mau = mau/res;
        cout << tu << "/" << mau << endl;
    }
};

int main()
{
    int n;
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        ll a1, a2, b1, b2;
        cin >> a1 >> a2 >> b1 >> b2;
        phanso x(a1, a2, b1, b2);
        cout << x.C() << " ";
        x.D();
    }
}
