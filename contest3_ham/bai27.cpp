
#include <iostream>
#include <math.h>

using namespace std;
using ll = long long;

// ham liet ke so chinh phuong
int mang[1000001];
void check()
{
    for (int i = 0; i <= 1000000; i++)
    {
        mang[i] = 1;
    }
    mang[0] = mang[1] = 0;
    for (int i = 2; i <= sqrt(1000000); i++)
    {

        for (int j = i * i; j <= 1000000; j += i)
        {
            mang[j] = 0;
        }
    }
}

int main()
{
    ll n;
    cin >> n;
    int cnt = 0;
    check();
    for (int i = 0; i <= sqrt(n); i++)
    {
        if (mang[i] == 1)
        {
            cnt++;
        }
    }
    cout << cnt << endl;
}