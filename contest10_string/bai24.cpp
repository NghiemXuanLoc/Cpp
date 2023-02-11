#include <iostream>
#include <algorithm>
#include <string>
#include <map>

using namespace std;
using ll = long long;

int dem[100005];

int main()
{
    string s;
    cin >> s;
    ll cnt = 0;
    for (int i = 0; i < s.size(); i++)
    {
        dem[s[i]]++;
    }
    cnt += s.size();
    for (int i = 0; i < s.size(); i++)
    {
        if (dem[s[i]] >= 2)
        {
            cnt += (1ll * dem[s[i]] * (dem[s[i]] - 1)) / 2;
            dem[s[i]] = 0;
        }

    }
    cout << cnt << endl;

    // map<char, int> mp;
    // for (int i = 0; i < s.size(); i++)
    // {
    //     mp[s[i]]++;
    // }
    // cnt += s.size();
    // for (auto x : mp)
    // {
    //     cnt += (1ll * x.second * (x.second - 1)) / 2;
    // }
    // cout << cnt << endl;
}