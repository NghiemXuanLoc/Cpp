#include <iostream>
#include <algorithm>
#include <map>
#include <string>
#include <vector>
#include <utility>

using namespace std;

bool cpm(pair<char, int> a, pair<char, int> b)
{
    if (a.second != b.second)
    {
        return a.second > b.second;
    }
    else
        return a.first > b.first;
}

int dem[270];
int main()
{
    string s;
    cin >> s;
    map<char, int> mp;

    int max_val = INT_MIN, min_val = INT_MAX;

    for (int i = 0; i < s.size(); i++)
    {
        mp[s[i]]++;
    }
    
    pair<char, int> a;
    pair<char, int> temp[270];
    int cnt = 0;
    for (auto x : mp)
    {
        min_val = min(min_val, x.second);
        temp[cnt].first = x.first;
        temp[cnt].second = x.second;
        cnt++;
    }
    sort(temp, temp + cnt, cpm);
    cout << temp[0].first << " " << temp[0].second << endl;
    for (auto x : temp)
    {
        if (x.second == min_val)
        {
            cout << x.first << " " << x.second << endl;
            break;
        }
    }
}