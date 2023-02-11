#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool check(string s)
{
    int ok = 0;
    int l = 0, r = s.size() - 1;
    while (l <= r)
    {
        if (s[l] == '6' || s[r] == '6')
        {
            ok = 1;
        }

        if (s[l] != s[r])
        {
            return false;
        }
        l++;
        --r;
    }
    return ok;
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