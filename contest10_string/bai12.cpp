#include <iostream>
#include <algorithm>
#include <string>
#include <map>
#include <set>
#include <sstream>

using namespace std;

string a[100005];

// ham thuan nghich

bool tn(string s)
{
    string t = s;
    int l = 0, r = t.size() - 1;
    while (l <= r)
    {
        swap(t[l], t[r]);
        l++;
        r--;
    }
    return t == s;
}

bool cmp(string a, string b)
{
    return a.size() < b.size();
}

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    map<string, int> mp;
    string temp;
    int cnt = 0;
    while (ss >> temp)
    {
        if (tn(temp))
        {
            mp[temp]++;
            if (mp[temp] == 1)
            {
                a[cnt++] = temp;
            }
        }
    }
    stable_sort(a, a + cnt, cmp);

    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << " ";
    }
}