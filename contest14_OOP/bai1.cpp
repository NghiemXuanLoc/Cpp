#include <iostream>
#include <algorithm>
#include <string>

using namespace std;
using ll = long long;

class phanso
{
private:
    ll ts, ms;

public:
    void nhap()
    {
        cin >> ts >> ms;
    }

    ll abc(ll a, ll b)
    {
        if (a % b == 0)
        {
            return b;
        }
        else
            return abc(b, a % b);
    }

    void thaydoi()
    {
        ll ucln = abc(this->ts, this->ms);
        this->ms = this->ms / ucln;
        this->ts = this->ts / ucln;
    }

    void in()
    {
        cout << ts << "/" << ms << endl;
    }
};

int main()
{
    phanso a;
    a.nhap();
    a.thaydoi();
    a.in();
}
