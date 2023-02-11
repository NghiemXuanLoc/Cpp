#include <iostream>
#include <string>
#include <math.h>

using namespace std;
using ll = long long;

int main()
{
    string s;
    cin >> s;
    ll m;
    cin >> m;
    ll res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res = res * 10 + (s[i] - '0');
        res %= m;
    }
    cout << res << endl;
}