#include <iostream>
#include <string>
#include <sstream>
#include <algorithm>

using namespace std;

// chuyen ki tu in thuong
string dem[10005];
string a[10005];

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
    string s;
    getline(cin, s);
    string e = lower(s);
    stringstream ss(e);
    string temp;
    int cnt = 0;
    while (ss >> temp)
    {
        a[cnt] = temp;
        cnt++;
    }
    sort(a, a + cnt);

    int res = 1;
    for (int i = 0; i < cnt - 1; i++)
    {
        if (a[i] != a[i + 1])
        {
            res++;
        }
    }
    cout << res << endl;
}