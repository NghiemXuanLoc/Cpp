#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>
#include <vector>

using namespace std;

string a[100005];

string ch1(string s)
{
    string t = s;
    int l = 0;
    t[l] = toupper(t[l]);
    for (int i = 1; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    return t;
}

string ch2(string s)
{
    string t = s;
    for (int i = 0; i < s.size(); i++)
    {
        t[i] = toupper(t[i]);
    }
    return t;
}

int main()
{
    string s;
    getline(cin, s);
    int cnt = 0;

    stringstream ss(s);
    string temp;

    while (ss >> temp)
    {
        a[cnt++] = temp;
    }
    for (int i = 0; i < cnt; i++)
    {
        if (i < cnt - 1)
        {
            a[i] = ch1(a[i]);
        }
        else
            a[i] = ch2(a[i]);
    }

    vector<string> v1(a, a + cnt);
    vector<string> v2(a, a + cnt);

    for (int i = 0; i < v1.size(); i++)
    {
        if (i == v1.size() - 2)
        {
            v1[i] += ',';
        }
    }

    for (auto x : v1)
    {
        cout << x << " ";
    }
    cout << endl;

    cout << v2[v2.size() - 1] + ',' << " ";
    for (int i = 0; i < v2.size() - 1; i++)
    {
        cout << v2[i] << " ";
    }
}