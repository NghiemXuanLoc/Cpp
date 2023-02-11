#include <iostream>
#include <algorithm>
#include <string>
#include <sstream>

using namespace std;

// viet ham kiem tra thuan nghich

string a[10005];

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

int main()
{
    string s;
    getline(cin, s);
    stringstream ss(s);
    string temp;
    int cnt = 0;
    while (ss >> temp)
    {
        if (tn(temp))
        {
            a[cnt] = temp;
            cnt++;
        }
    }
    sort(a, a + cnt);

    for (int i = 0; i < cnt; i++)
    {
        cout << a[i] << " ";
    }
}