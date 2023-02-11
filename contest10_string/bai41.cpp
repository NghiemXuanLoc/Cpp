#include <iostream>
#include <string>

using namespace std;

using ll = long long;

bool check(string s, int k)
{
    for (int i = 0; i < k; i++)
    {
        if (s[s.size() - 1 - i] != '0')
        {
            return false;
        }
    }
    return true;
}

int main()
{
    string s;
    int k;
    cin >> s;
    cin >> k;
    if (check(s, k))
    {
        cout << "YES" << endl;
    }
    else
        cout << "NO" << endl;
}