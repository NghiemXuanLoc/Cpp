#include <iostream>
#include <set>
#include <map>
#include <string>
#include <sstream>

using namespace std;
string a[100005];
int dem[1000005];

int main()
{
    string s;
    getline(cin, s);
    set<string> se;
    map<string, int> mp;
    string t, l;
    stringstream ss(s);
    string temp;
    int cnt = 0;
    while (ss >> temp)
    {
        se.insert(temp);
        mp[temp]++;
        a[cnt++] = temp;
    }
    for (auto x : se)
    {
        a[cnt++] = x;
        t += x;
        t += ' ';
    }
    t.pop_back();
    cout << t << endl;

    for (int i = 0; i < cnt; i++)
    {
        if (mp[a[i]])
        {
            l += a[i];
            l += ' ';
            mp[a[i]] = 0;
        }
    }
    l.pop_back();
    cout << l << endl;
}
