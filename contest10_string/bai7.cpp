#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// kiem tra xau doi xung

bool check(string s)
{
    string t = s;
    int l = 0, r = t.size() - 1;
    while (l <= r)
    {
        if (t[l] != t[r])
        {
            return false;
        }
        l++;
        r--;
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (check(s))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}