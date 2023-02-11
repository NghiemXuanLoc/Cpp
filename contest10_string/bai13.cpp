#include <iostream>
#include <algorithm>
#include <map>
#include <sstream>

using namespace std;

string a[100005];

int main()
{
    string s;
    getline(cin, s);
    map<string, int> mp;
    int cnt = 0;
    stringstream ss(s);
    string temp;
    while (ss >> temp)
    {
        mp[temp]++;
        if (mp[temp] == 1)
        {
            a[cnt++] = temp;
        }
    }

    for (auto x : mp)
    {
        cout << x.first << " " << x.second << endl;
    }
    cout << endl;
    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << " " << mp[a[i]] << endl;
    }
}