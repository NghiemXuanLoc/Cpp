#include <iostream>
#include <string>
#include <algorithm>
#include <map>
#include <vector>
#include <utility>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    else
        return a.first < b.first;
}

int main()
{
    string s;
    map<string, int> mp;
    vector<pair<string, int>> v;
    while (cin >> s)
    {
        if (s == "good" || s == "bad" || s == "wonderful" || s == "terrible")
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
                    }
                }
            }
        }
    }
    sort(v.begin(), v.end(), cmp);

    for (auto x : v)
    {
        cout << x.first << ' ' << x.second << endl;
    }
}