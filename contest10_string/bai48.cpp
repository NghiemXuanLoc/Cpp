#include <iostream>
#include <string>

using namespace std;
using ll = long long;

bool smm(string s)
{
    ll ans = 0;
    for (int i = 0; i < s.size(); i++)
    {
        ans += s[i] - '0';
    }
    if (ans == 9)
    {
        return 1;
    }
    else if (ans < 9)
    {
        return 0;
    }
    else
    {
        string temp = to_string(ans);
        return smm(temp);
    }
}

int main()
{
    string s;
    cin >> s;
    if (smm(s))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}