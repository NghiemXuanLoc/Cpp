#include <iostream>
#include <string>
#include <ctype.h>

using namespace std;
using ll = long long;

ll check(string s, ll b)
{
    ll res = 0;
    for (int i = 0; i < s.size(); i++)
    {
        res = res * 10 + (s[i] - '0');
        res %= b;
    }
    return res;
}

int check1(ll a, ll b)
{
    if (a%b==0)
    {
        return b;
    }return check1(b, a % b);
    
}

int main()
{
    string s;
    cin >> s;
    ll m;
    cin >> m;
    cout << check1(m, check(s, m)) << endl;
    
}