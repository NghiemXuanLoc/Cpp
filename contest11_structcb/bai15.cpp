#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <vector>
#include <utility>
#include <algorithm>

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

string tach(string s)
{
    stringstream ss(s);
    string temp;
    string x = "";
    while (ss >> temp)
    {
        x = temp;
    }
    return temp;
}
int main()
{

    string s;
    map<string, int> mp;
    vector<pair<string, int>> v;
    while (getline(cin, s))
    {
        string n = tach(s);
        mp[n]++;
    }

    for (auto x : mp)
    {
        v.push_back(x);
    }

    sort(v.begin(), v.end(), cmp);

    for (auto x : v)
    {
        cout << x.first << " " << x.second << endl;
    }
}