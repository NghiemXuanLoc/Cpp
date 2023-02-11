#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>

using namespace std;

bool check(string s)
{
    string t = s;
    int l = 0, r = s.size() - 1;
    while (l <= r)
    {
        int t1 = t[l] - '0', t2 = t[r] - '0';
        if ((t[l] % 2 == 1 )|| (t[r] % 2 == 1 )|| (t[l] != t[r]) || (isdigit(t[l]) == 0) || (isdigit(t[r]) == 0))
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

bool cmp(pair<string, int> a, pair<string, int> b)
{
    return a.second > b.second;
}

int main()
{
    string s;
    map<string, int> mp;
    vector<pair<string, int>> v;
    while (cin >> s)
    {
        if (check(s))
        {
            mp[s]++;
            if (mp[s] == 1)
            {
                v.push_back({s, mp[s]});
            }
            else
            {
                for (int i = 0; i < v.size(); i++)
                {
                    if (v[i].first == s)
                    {
                        v[i].second = mp[s];
                        break;
                    }
                }
            }
        }
    }

    stable_sort(v.begin(), v.end(), cmp);

    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
}