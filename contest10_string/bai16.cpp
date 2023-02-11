#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

string a[100005];

string ch(string s)
{
    string t = s;
    int l = 0, r = s.size() - 1;
    t[l] = toupper(t[l]);
    for (int i = 1; i < t.size(); i++)
    {
        t[i] = tolower(t[i]);
    }
    return t;
}

int main()
{
    string s, t, n;
    getline(cin, s);
    getline(cin, t);
    stringstream ss(s), tt(t);
    string temp, te;

    int cnt = 0;

    while (ss >> temp)
    {
        a[cnt++] = ch(temp);
    }

    while (getline(tt, te, '/'))
    {
        if (te.size() < 2)
        {
            n += '0';
            n += te;
            n += '/';
        }
        else
        {
            if (te.size() == 4)
            {
                n += te;
                break;
            }
            n += te;
            n += '/';
        }
    }

    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;

    cout << n << endl;
}