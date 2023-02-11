#include <iostream>
#include <string>
#include <math.h>

using namespace std;

bool check(string s)
{
    int c = 0, l = 0;
    for (int i = 0; i < s.size(); i++)
    {
        if (i % 2 == 0)
        {
            c += s[i] - '0';
        }
        else
            l += s[i] - '0';
    }
    int res = abs(c - l);
    return res % 11 == 0;
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