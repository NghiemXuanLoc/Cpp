#include <iostream>
#include <string>

using namespace std;

bool check(string s)
{
    int lt = 1;
    int res = 0;
    for (int i = s.size() - 1; i >= 0; i--)
    {
        res += (s[i] - '0') * lt;
        res %= 5;
        lt *= 2;
        lt %= 5;
    }

    return res == 0;
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