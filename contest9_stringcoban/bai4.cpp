#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

int test(string s)
{
    for (int i = 0; i < s.size() - 1; i++)
    {
        if ((s[i + 1] - s[i] != -1) && (s[i + 1] - s[i] != 1))
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    cin >> s;
    if (test(s))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}