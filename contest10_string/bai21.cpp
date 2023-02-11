#include <iostream>
#include <string>
#include <sstream>
#include <map>
#include <set>

using namespace std;

string s1[100005];
string lower(string s)
{
    string t = s;
    for (int i = 0; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    return t;
}

int main()
{
    string s, t;
    getline(cin, s);
    getline(cin, t);
    set<string> se;
    map<string, int> mp;

    stringstream ss(s);
    stringstream tt(t);
    string temps;
    string tempt;
    int cnts = 0;
    while (ss >> temps)
    {
        temps = lower(temps);
        s1[cnts++] = temps;
    }
    while (tt >> tempt)
    {
        tempt = lower(tempt);
        mp[tempt]++;
    }

    for (int i = 0; i < cnts; i++)
    {
        if (mp[s1[i]] != 0)
        {
            se.insert(s1[i]);
            mp[s1[i]] = 0;
        }
    }
    for (auto x : se)
    {
        cout << x << " ";
    }
}