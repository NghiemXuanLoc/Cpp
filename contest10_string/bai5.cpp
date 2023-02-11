#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;
char a[256];

int main()
{
    string s1, s2;
    cin >> s1;
    cin >> s2;

    set<char> se;
    set<char> s;
    int cnt = 0;
    for (int i = 0; i < s2.size(); i++)
    {
        se.insert(s2[i]);
        s.insert(s2[i]);
    }
    for (int i = 0; i < s1.size(); i++)
    {
        auto it = se.find(s1[i]);
        if (it != se.end())
        {
            a[cnt] = s1[i];
            cnt++;
            se.erase(s1[i]);
        }
        s.insert(s1[i]);
    }
    sort(a, a + cnt);
    for (int i = 0; i < cnt; i++)
    {
        cout << a[i];
    }

    cout << endl;
    for (auto x : s)
    {
        cout << x;
    }
    cout << endl;
}