#include <iostream>
#include <utility>
#include <string>
#include <algorithm>
#include <vector>
#include <map>

using namespace std;

int dem[1000000];

bool tn(string s)
{
    string t = s;
    int l = 0, r = s.size() - 1;
    while (l <= r)
    {
        swap(t[l], t[r]);
        l++;
        r--;
    }
    return t == s;
}

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
    map<string, int> mp;
    string s;
    vector<pair<string, int>> v;
    int cnt = 0;
    while (cin >> s)
    {
        if (tn(s))
        {
            mp[s]++;
            if (mp[s] == 1)
            {
                cnt++;
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

    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i].first << " " << v[i].second << endl;
    }
}