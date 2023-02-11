#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>
#include <map>
#include <utility>

using namespace std;

bool cmp(pair<string, int> a, pair<string, int> b)
{

    return a.first > b.first;
}

int main()
{

    string s;
    getline(cin, s);
    string t = s;
    int cnt = 0;
    map<string, int> mp;

    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        mp[temp]++;
        if (mp[temp] == 1)
        {
            cnt++;
        }
    }
    int max_val = INT_MIN, min_val = INT_MAX;
    for (auto x : mp)
    {
        int m = x.second;
        max_val = max(m, max_val);
        min_val = min(m, min_val);
    }
    pair<string, int> ma, mi;
    for (auto x : mp)
    {
        if (x.second == min_val)
        {
            mi.first = x.first;
            mi.second = x.second;
        }
        if (x.second == max_val)
        {
            ma.first = x.first;
            ma.second = x.second;
        }
    }
    cout << ma.first << " " << ma.second << endl;
    cout << mi.first << " " << mi.second << endl;
}